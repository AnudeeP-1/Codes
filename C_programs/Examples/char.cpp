#include<iostream>
using namespace std;
int main(){
    string str;
    cin>>str;
    string final = "z";
    string ans = "";
    ans = str;
    while(ans!=final){
       final=ans;
        int l=0;
        while(ans[l++]){}
        l=l-1;
        ans="";
        for(int i=0;i<l;i++){
            if(final[i]==final[i+1] || final[i] == final[i-1]){continue;}
            else{ans+=final[i];}
        }
    }
    cout<<ans;
    return 0;
}

//azxxzy