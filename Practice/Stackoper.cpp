#include<bits/stdc++.h>

using namespace std;

int main(){

    stack<int> s;

    s.push(10);
    s.push(5);
    cout<<s.top()<<endl;
    s.pop();
    cout<<s.top()<<endl;
    cout<<"Is empty: "<<s.empty()<<"\n";
    cout<<"Size: "<<s.size()<<"\n";
    s.pop();
    cout<<"Is empty: "<<s.empty();

    return 0;
}