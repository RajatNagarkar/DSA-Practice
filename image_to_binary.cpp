#include<bits/stdc++.h>
using namespace std;
int main(void){
	cout<<"program initiated"<<endl;
	ifstream image("sagar.jpg",ios::in | ios::binary);
	ofstream binary("binary_image_data.txt",ios::out | ios::binary);
	char ch;
	while(!image.eof()){
		ch = image.get();
		binary.put(ch);
	}
	cout<<"\ndone";
	image.close();
	binary.close();
}
