#include<iostream>
using namespace std;

int main(){
    int a=5;
    //left shift (x<<y) == (x * 2^y)
    int x=a<<1;
    cout<<"a<<1: "<<x<<endl;
    //right shift (x>>y) == (x / 2^y)
    int y=a>>1;
    cout<<"a>>1: "<<y<<endl;
}