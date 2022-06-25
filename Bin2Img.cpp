#include<bits/stdc++.h>

using namespace std;

int main(){

    ifstream in("img.txt", ios::in | ios::app);
    ofstream out("image.jpg", ios::out | ios::binary);
    char buf[65];
    while(in.read(buf, sizeof(buf)-1)){
        string str(buf);
        out<<str;
    }
    in.close();
    out.close();

    return 0;
}