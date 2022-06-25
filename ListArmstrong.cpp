#include<bits/stdc++.h>

using namespace std;

int armCal(int num) {
    return  num*num*num;
}

int main(){
    int n, i, temp;
    cin>>n;
    
    vector<int> ans;

    if(n > 10000 || n < 2){
        cout<<"Wrong Input";
        goto done;
    }

    for(i = 2;i<n;i++){
        temp = i;
        int sum = 0;
        while(temp){
            sum += armCal(temp % 10);
            temp = temp/10;
        }
        if(sum == i){
            ans.push_back(sum);
        }
    }

    if(ans.size() == 0){
        cout<<"No Number Found";
    }
    for(auto i = ans.begin();i != ans.end();i++){
        cout<<*i<<" ";
    }

    
    
    
    done:return 0;
}