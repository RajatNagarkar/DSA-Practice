#include<bits/stdc++.h>

using namespace std;

int binToDeC(string str) {
    int i, base = 1, num = 0;
    for(i = str.length()-1;i>=0;i--) {
        num += int(str[i]) * base;
 
        base = base * 2;
    }
    return num;
}

string decToBin(int n) {
    int i = 0;
    string str = "";
    while (n > 0) {
 
        // storing remainder in binary array
        str += to_string(n % 2);
        n = n / 2;
        i++;
    }
    return str;
}

int main(){

    string str1 = "", str2 = "", str3="";
    cin>>str1>>str2>>str3;

    if(str2 == "XOR"){
        cout<<decToBin(binToDeC(str1) ^ binToDeC(str3));
    }
    return 0;
}