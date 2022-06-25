#include<bits/stdc++.h>

using namespace std;
typedef long long int lli;

lli maxSumSubArr(vector<int> ele){
    lli currSum = 0, maxSum = 0;
    for(auto i = ele.begin(); i != ele.end(); ++i){
        currSum += *i;
        
        if(currSum > maxSum)
            maxSum = currSum;

        if(currSum < 0)
            currSum = 0;
        
    }
    return maxSum;
}

int main(){
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    cout.tie(NULL);

    vector<int> ele;

    lli n, i, num;
    cin>>n;

    ele.reserve(n);

    for(i=0;i<n;i++){
        cin>>num;
        ele.push_back(num);
    }
    cout<<maxSumSubArr(ele);
    return 0;
}