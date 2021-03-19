#include <bits/stdc++.h>
using namespace std;

int checkBalanced(string expr){
    int x=0;
    stack<char> c;
    for(int i=0;i<expr.length();i++){
        if (expr[i] == '(' || expr[i] == '[' || expr[i] == '{') {
            c.push(expr[i]);
            continue;
        }
        switch (expr[i]){
            case ')':
                x=c.top();
                c.pop();
                if(x=='{' || x=='['){
                    return false;
                    break;
                }
            case '}':
                x=c.top();
                c.pop();
                if(x=='(' || x=='['){
                    return false;
                    break;
                }
            case ']':
                x=c.top();
                c.pop();
                if(x=='{' || x=='('){
                    return false;
                    break;
                }
        }
        return true;
        break;
    }
}

int main(){
    string expr = "{()}";
    if(checkBalanced(expr)){
        cout<<"Balanced";
    }
    else{
        cout<<"Not balanced";
    }
    return 0;
};