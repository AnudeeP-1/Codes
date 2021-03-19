#include<bits/stdc++.h>
using namespace std;

class myClass{
    public: int id;
            string name;

    public: void printid(){
        cout<<"Id is: "<<id<<endl;
    }

    void printName();
};

void myClass::printName(){
    cout<<"Name is: "<<name<<endl;
}

int main(){
    myClass objectOfMyClass;
    objectOfMyClass.id = 10;
    objectOfMyClass.printid();
    objectOfMyClass.name = "Anudeep";
    objectOfMyClass.printName();
}