#include<bits/stdc++.h>
#define ASCII_SIZE 256 

using namespace std;

int main(){
    string str;
    char c;
    int max=0;
    int count[ASCII_SIZE]={0};
    cout<<"Enter the sample string: ";
    cin>>str;
    for(int i=0;i<str.length();i++){
        count[str[i]]++;
        if(max<count[str[i]]){
            max=count[str[i]];
            c=str[i];
        }
    }
    cout<<c;
}