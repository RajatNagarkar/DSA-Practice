#include<bits/stdc++.h>

using namespace std;

int main(){
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    cout.tie(NULL);
    typedef long long int lli;

    lli n, i, ele;
    cin>>n;

    vector<int> arr;

    arr.reserve(n);

    for(i = 0;i<n;i++){
        cin>>ele;
        arr.push_back(ele);
    }

    lli num = -1, count = 0;
    // num  = arr[0];

    for(auto i = arr.begin(); i != arr.end(); ++i){
        if(count == 0){
            num = *i;
            count++;
        }
        else {
            if(*i == num){
                count++;
            } else{
                count--;
            }
        }
        num = count == 0 ? *i : num;
    }
    if(count > n/2){
        cout<<num<<"\n";
    } else { 
        cout<<"-1\n";
    }

    return 0;
}