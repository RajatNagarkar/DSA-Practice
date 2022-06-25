#include<bits/stdc++.h>

using namespace std;

class NFB{
    public:
    int64_t fibo(int n){
        int64_t fib[n+2], i;

        fib[0] = 0;
        fib[1] = 1;

        for(i=2;i<=n;i++){
            fib[i] = fib[i-1] + fib[i-2];
        }
        return fib[n];
    }
};

int main(){
    NFB obj;
    int64_t n;
    while(1){
        cin>>n;
        cout<<"Ans: "<<obj.fibo(n)<<endl;
    }
    return 0;
}