#include<bits/stdc++.h>

using namespace std;

stack<string> nums;



string multiplyStrings(string num1, string num2) {
    int nl1 = num1.length(), i;
    int nl2 = num2.length(), j;
    string num(nl1+nl2, '0');

    int msb = 0;
    for(i = nl1-1;i>=0;i--){
        int carry = 0;
        int bit = msb;
        for(j = nl2-1;j>=0;j--){
            int n = num[bit] - 48;
            int prod = (num1[i] - 48) * (num2[j]-48);
            int sum = prod + carry + n;
            num[bit] = (sum%10)+48;
            carry = sum/10;
            bit++;
        }
        if(carry>0){
            num[bit] += carry;
        }
        msb++;
    }
    while(num.back() == '0'){
        num.pop_back();
    }
    reverse(num.begin(), num.end());
    
    return num;
}

int main(){

    string num1, num2;  
    cin >> num1 >> num2;

    cout<<multiplyStrings(num1, num2);

    return 0;
}