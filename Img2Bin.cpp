#include<bits/stdc++.h>
// #include<fstream>

using namespace std;

int main(){

    ifstream image ("ktl.jpg", ios::in | ios::binary);
    ofstream binary ("img.txt", ios::out | ios::binary);

    // FILE *image = fopen("ktl.jpg", "rb");
    // FILE *binary = fopen("img.txt", "wb");

    char ch;
    while(!image.eof()) {
        ch = image.get();
        binary.put(ch);
    }
    image.close();
    binary.close();
    // fclose(image);
    // fclose(binary);

    return 0;
}