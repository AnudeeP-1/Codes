#include<bits/stdc++.h>
using namespace std;

int main(){
    string str1,str2;
    cout<<"Enter the string 1";
    cin>>str1;
    cout<<"Enter the string 2";
    cin>>str2;
    string temp;
    temp=str1;
    str1=str2;
    str2=temp;
    cout<<"String after swapping: "<<str1<<" "<<str2;
}