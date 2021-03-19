#include<stdio.h>
#include<ctype.h>
#include<string.h>

int main(){
    char str1[20];
    char s;
    int count = 0,i=0;
    printf("Enter the string \n");
    scanf("%[^\n]",str1);
    printf("String is: %s", str1);
    printf("Enter the letter: ");
    scanf("%c",&s);
    printf("The value in s is %c  \n", s);
    printf("Length of string is: %d", strlen(str1));
    while(str1[i] != '\0'){
        if(str1[i] == 'e'){
            count =count+1;
        }
        i = i+1;
    }
    printf("Count is %d", count);
    return 0;
}
// void frequency(){
//     char str1[10];
//     char c;
//     int count = 0,i=0;
//     printf("Enter the string \n");
//     scanf("%[^\n]",str1);
//     printf("NAme is: ", str1);
//     printf("Enter the letter");
//     scanf("%[^\n]", c);
//     printf("Length of string is %d", strlen(str1));
//     while(strlen(str1) != '\0'){
//         if(str1[i] == c){
//             count++;
//             i++;
//         }
//     }
//     printf("Count is %d", count);
// }
