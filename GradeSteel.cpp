#include<bits/stdc++.h>

using namespace std;

int main(){
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    cout.tie(NULL);
    typedef long long int lli;

    lli t;

    cin>>t;

    while(t--) {
        int hard, tensile;
        float carbon;
        cin>>hard>>carbon>>tensile;

        bool hFlag = false, cFlag = false, tFlag = false;
        if(hard > 50)
            hFlag = true;
        if(carbon < 0.7)
            cFlag = true;
        if(tensile > 5600)
            tFlag = true;

        if(hFlag && cFlag && tFlag)
            cout<<"10\n";
        else if(hFlag && cFlag)
            cout<<"9\n";
        else if(cFlag && tFlag)
            cout<<"8\n";
        else if(hFlag && tFlag)
            cout<<"7\n";
        else if(hFlag || cFlag || tFlag)
            cout<<"6\n";
        else
            cout<<"5\n";
    }

    return 0;
}