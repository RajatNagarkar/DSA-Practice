#include<bits/stdc++.h>

using namespace std;

int getNum(vector<char> num) {
    int number = 0;

    for(auto i = num.begin();i != num.end();++i){
        int digit = (int)*i;
        digit -= 48;
        
        number = number * 10;
        number+= digit;
    }
    return number;
}

int main(){

    string str;

    cin>>str;

    int dep = 0, sum = 0, i;
    vector<char> num;
    for(i = 0;i<str.length();i++){
        if(str[i] == '{'){
            dep++;
        }

        if(str[i] >= '0' && str[i] <= '9'){
            num.push_back(str[i]);
        }

        
        if(str[i] == ',' || str[i] == '}'){
            sum += (getNum(num) * dep);
            num.clear();
        }
        
        if(str[i] == '}'){
            dep--;
        }
    }
    cout<<sum;
    return 0;
}