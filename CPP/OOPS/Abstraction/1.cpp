//displaying only essential information and hiding the details is known as abstraction
//for eg. consider man driving a car. He knows how to apply brakes and accelerator
//but he dont know whats happening inside the brake mechanism. 
//eg. is we use pow() to calculate the power using math.h header file.
//but we donno whats happening inside the library

#include<iostream>
using namespace std;

class abstraction {
    private: int a, b;
    public: void set(int x, int y){
        a=x;
        b=y;
    }
    void display(){
        cout<<"a="<<a<<endl;
        cout<<"b="<<b<<endl;
    }
};

int main(){
    abstraction ab;
    ab.set(10,20);
    ab.display();
}

//advantages:-----*Helps the user to avoid writing the low level code