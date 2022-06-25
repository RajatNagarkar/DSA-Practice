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
        string str;
        cin>>str;
        lli i, sum = 0, num = 0, flag = 0;
        for(i = 0;i < str.length();i++){
            if(str[i] >= '0' && str[i]<='9'){
                if(i != 0){
                    if(str[i-1] >= '0' && str[i-1] <= '9'){
                        int temp = ((int)str[i]) - 48;
                        num = num * 10;
                        num +=temp;
                    } else {
                        int temp = ((int)str[i]) - 48;
                        num = num * 10;
                        num += temp;
                    }
                    if(i == str.length() - 1 ||str[i+1] <= '0' || str[i+1] >= '9'){
                        flag = 1;
                    }
                } else {
                    lli temp = ((int)str[i]) - 48;
                    num = (num * 10) + temp;
                    // sum += num;
                    if((str[i+1] <= '0' || str[i+1] >= '9')){
                        flag = 1;
                    }
                }
            }
            if(flag == 1){
                sum += num;
                num = 0;
                flag = 0;
            }
        }
        cout<<sum<<"\n";
        
    }

    return 0;
}