#include<bits/stdc++.h>

using namespace std;

class GT{
    public:
    long long gtrav(long long int m, long long int n){
        long long int grt[m+2][n+2], i, j;
        grt[0][0] = 0;
        grt[0][1] = 0;
        grt[1][0] = 0;
        grt[1][1] = 0;
        grt[1][2] = 1;
        grt[2][1] = 1;

        for(i = 1;i<=m;i++){
            for(j=1;j<=n;j++){
                grt[i][j] = grt[i-1][j] + grt[i][j-1];
            }
        }
        return grt[m][n];

    }
};

int main(){
    int m, n;
    cin>>m>>n;
    
    GT gt;
    cout<<"Ways to travel through grid: "<<gt.gtrav(m,n);

    return 0;
}