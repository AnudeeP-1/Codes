//consider the eg of a store where there are many sectors like sales, accounts
//sales have sales related data and accounts have acc related data.
//whenever acc section needs information about sales, he need to ask it with the sales section
//This property is known as encapsulation

#include<bits/stdc++.h>
using namespace std;

class Encapsulate{
    private: int x;

    public: void set(int a){
        x = a;
    }

    public: int get(){
        return x;
    }
};

int main(){
    Encapsulate en;
    en.set(10);
    cout<<en.get()<<endl;
    return 0;
}