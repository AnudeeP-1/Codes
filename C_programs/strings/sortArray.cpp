#include<bits/stdc++.h>

using namespace std;
int main(){
    string str;
    cout<<"Enter the string: ";
    cin>>str;
    for(int i=0;i<str.length();i++){
        for(int j=i;j<str.length();j++){
            if(int(str[i])>int(str[j])){
                char temp;
                temp=str[i];
                str[i]=str[j];
                str[j]=temp;
            }
        }
    }
    cout<<"After sorting: "<<str;
}
