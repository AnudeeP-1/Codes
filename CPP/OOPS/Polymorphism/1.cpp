//ability to have many forms
//for example consider a man, he can be husband father or employee at the same time
//2 types (1). Compile time polymorphism (2). Run time polymorphism
//(1). 2 types (1). Function overloading (2). Operator overloading
//(1) function overloading

#include<bits/stdc++.h>
using namespace std;

class Base{
    public: void func(int a){
        cout<<"Value of a: "<<a<<endl;
    }
    void func(int a, int b){
        cout<<"Value of a: "<<a<<" b:"<<b<<endl;
    }

    //below line is fn overriding
    void display(){
        cout<<"This is base class"<<endl;
    }
};

class derived : public Base{
    //below line is fn overriding
    public: void display(){
        cout<<"This is derived class"<<endl;
    }
};

int main(){
    Base base;
    derived dir;
    //below line is fn overriding
    dir.display();
    base.func(1);
    base.func(5, 6);
    //base.func(5, 6, 9); -> this will give error 
    return 0;
}

//operator overloading is nothing but "+" can be used in adding or concatinating

//overriding is nothing but wenever we are define fn with the same name and same argument

//then the function which is there in derived class gets executed. The base class fn is overriden
//by the child class.