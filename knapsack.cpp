#include<bits/stdc++.h>

using namespace std;

int knapSack(int w, vector<int> val, vector<int> weights, int n){
    int i, j;

    vector<vector<int>> K(n+1, vector<int>(w+1));

    for(i = 0;i <= n;i++){
        for(j = 0;j <= w;j++){
            
            if(i == 0 || w == 0){
                K[i][j] = 0;
            } else if(weights[i-1] <= j){
                K[i][j] = max(K[i-1][j], K[i-1][j-weights[i-1]] + val[i-1]);
            } else {
                K[i][j] = K[i-1][j];
            }
        }
    }

    return K[n][w];
}

int main(){
    
    int n, i, w, num;
    cout<<"Enter number of items: ";cin>>n;

    vector<int> val, weights;

    val.reserve(n);
    weights.reserve(n);
    
    for(i = 0;i < n;i++){
        cin>>num;
        val.push_back(num);
    }
    for(i  = 0;i < n;i++){
        cin>>num;
        weights.push_back(num);
    }

    cout<<"\nEnter allowed weight: ";cin>>w;

    cout<<"\nMaxinmum Profit is: "<<knapSack(w, val, weights, n);

    return 0;
}