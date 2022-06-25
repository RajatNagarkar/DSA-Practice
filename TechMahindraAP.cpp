#include<bits/stdc++.h>

using namespace std;

int nthTerm(int input1, int input2, int input3) {
    int d = abs(input1 - input2);
    int a = input1 - d;

    int term = a + ((input3 - 1) * d);
    return term;
}

int main(){

    int a, b, c;
    cin>>a>>b>>c;
    cout<<nthTerm(a, b, c);

    return 0;
}