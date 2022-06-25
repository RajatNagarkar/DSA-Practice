#include<bits/stdc++.h>

using namespace std;

class Instrument{
    public:
        virtual void makeSound() = 0;
};

class Accordion:public Instrument{
    public:
        void makeSound() {
            cout<<"Accordion is playing...\n";
        }
};

class Violin :public Instrument{
    public:
        void makeSound() {
            cout<<"Violin is playing...\n";
        }
};

int main(){
    Instrument* I1 = new Accordion();
    I1->makeSound();

    Instrument* I2 = new Violin();
    I2->makeSound();
    
    
    return 0;
    // system("pause>0");
}