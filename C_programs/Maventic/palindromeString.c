#include<stdio.h>
#include<string.h>

int main(){
    char original[100],c,reversed[100];
    int i=0,l=0;
    printf("Enter the string: ");
    do{
        fflush(stdin);
        c=getchar();
        original[i++]=c;

    } while(c != '\n');
    original[i-1]='\0';
    int h=0;
    h=strlen(original)-1;
    if(original[l++]!=original[h--]){
        printf("Not a palindrome\n");
    }
    else{
        printf("String %s is Palindrome\n",original);
    }
}