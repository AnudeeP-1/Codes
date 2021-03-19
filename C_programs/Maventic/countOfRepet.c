#include<stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(){
    char first[1000];
    char second[1000];
    int res=0;
    scanf("%s%s",first,second);

    for(int i=0;i<strlen(first);i++){ 
        int count=0;
        for(int j=0;j<strlen(second);j++){
            if(first[i]==second[j]){
                second[j]='A';
                count++;
            }
        }
        if(count>0)
        res++;
    }
    printf("%d",res);
}