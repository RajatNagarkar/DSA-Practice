#include<bits/stdc++.h>

using namespace std;

int notCommoninBothArrays(vector<int> v1, vector<int> v2)
{
    unsigned int n = v1.size();
    unsigned int m = v2.size();
    unsigned int i,j, k = 0;
    if(n < m){
        swap(n,m);
        v1.swap(v2);
    }
    for(i = 0; i < n; i++){
        for(j = 0; j < m; j++){
            if(v1[i] == v2[j]){
                break;
            }
        }
        if(j == m){
            k++;
        }
    }
    return k*2;
}

int main(){

    vector<int> v1 = {1,1,2,3,4,5,5,7,6,9,10};
    vector<int> v2 = {11,12,13,4,5,6,7,18,19,20};

    int n = v1.size();
    int m = v2.size();

    cout<<notCommoninBothArrays(v1, v2);

    return 0;
}