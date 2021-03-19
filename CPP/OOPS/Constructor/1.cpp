//constructor name shd be same as name of the class
//it is invoked automatically when the object of a class is created
//destructor is called automatically when scope of the object finishes

#include<iostream>
using namespace std;

class A{
    public:
        int a=10;
    //default constructor
    A(){
        cout<<"The value of a is: "<<a<<endl;
    }
    //parametrized
    A(int x){
        a=x;
        cout<<"The value passed is: "<<a<<endl;
    }
    A(int x, int y){
        a=x;
        cout<<"Value of x: "<<x<<" y: "<<y<<endl;
    }
    //destructor
    ~A(){
        cout<<"Destructor called"<<endl;
    }
};

int main(){
    A a(20); //finally this is called
    A b(30); //secondly this destructor is called
    A c(20, 30); //intially this destructor is called
}