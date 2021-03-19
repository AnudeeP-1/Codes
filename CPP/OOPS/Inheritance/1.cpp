// The capability of a class to derive properties and characteristics from another class is called Inheritance. Inheritance is one of the most important feature of Object Oriented Programming.
// Sub Class: The class that inherits properties from another class is called Sub class or Derived Class.
// Super Class:The class whose properties are inherited by sub class is called Base Class or Super class. 

#include<bits/stdc++.h>
using namespace std;

class parentClass{
    public: int id;
};

class childClass1 : public parentClass{
    public: string childName1;
};

class childClass2 : public parentClass{
    public: string childName2;
};

int main(){
    childClass1 child1;
    childClass2 child2;
    child1.id = 101;
    child1.childName1 = "Anu";
    cout<<"Id is: "<<child1.id<<endl;
    cout<<"Name is: "<<child1.childName1<<endl;
    child2.id = 102;
    child2.childName2 = "Deep";
    cout<<"Id is: "<<child2.id<<endl;
    cout<<"Name is: "<<child2.childName2<<endl;
}