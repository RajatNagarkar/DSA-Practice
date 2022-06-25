#include<bits/stdc++.h>

using namespace std;

bool sortSecondRev(const pair<int,int> &x, const pair<int,int> &y){
    return (x.second > y.second);
}

int main(){
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    cout.tie(NULL);
    typedef long long int lli;

    lli n, num, temp;
    vector< pair <int,int> > vect;
    cin>>n;

    while(n--) {
        cin>>num;
        
        temp = num;

        lli count = 0;
        while(temp > 0){
            if(temp & 1){
                count++;
            }
            temp = temp>>1;
        }
        // cout<<num<<" "<<count<<endl;
        vect.push_back(make_pair(num, count));
    }
    cin>>n;

    // sort(vect.begin(), vect.end());
    sort(vect.begin(), vect.end(), sortSecondRev);

    for(int  i = 0;i < n;i++){
        // if(vect[i].second == vect[i+1].second){
        //     if(vect[i+1].first > vect[i].first){
        //         int var = vect[i+1].first;
        //         vect[i].first = vect[i+1].first;
        //         vect[i+1].first = var;
        //     }
        // }
        cout<<vect[i].first<<" ";
    }
    cout<<"\n";
    return 0;
}