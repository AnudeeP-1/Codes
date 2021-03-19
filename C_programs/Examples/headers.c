#include<stdio.h>
#include<ctype.h>
#include<string.h>

void frequency();
void countWords();
void largestWord();
void printMaxLetter();
void pointerOperations();
void func1();
void compare();

int main(){
    char str1[20];
    //printf("Enter the string \n");
    //fgets(str1, sizeof(str1), stdin);
    //frequency(str1); //frequency of letters
    //countWords(str1); //count the no of words
    //largestWord(str1); //print the large word
    //printMaxLetter(str1); //prints the maximum occurence of charecter
    //pointerOperations();
    compare();
    return 0;
}
void frequency(char str1[]){
    char s;
    int count = 0,i=0;
    printf("---------------FREQUENCY FUNCTION---------------\n");
    printf("String is: %s", str1);
    printf("Enter the letter: ");    
    scanf("%c", &s);
    printf("The value in s is %c  \n", s);
    printf("Length of string is: %d\n", strlen(str1));
    while(str1[i] != '\0'){
        if(str1[i] == s){
            count =count+1;
        }
        i = i+1;
    }
    printf("Count is %d \n", count);
}
void countWords(char str1[]){
    printf("---------------COUNT WORDS FUNCTION---------------\n");
    int count=1, i=0;
    printf("String is %s", str1);
    while(i!=strlen(str1)){
        if(isspace(str1[i]) && str1[i]!='\n'){
            count++;
        }
        i++;
    }
    printf("No of words: %d\n", count);
}
void largestWord(char str1[]){
    printf("\n---------------LARGEST WORD FUNCTION---------------\n");
    char largest[20];
    char temp[20];
    char empty[2]={};
    int i=0,j=0,k=0;
    while(j!=strlen(str1)-1){
        if(!isspace(str1[i]) && str1[i]!='\n' && isalnum(str1[i])){
            temp[k]=str1[i];
        }
        k++;
        if(isspace(str1[i]) || !isalnum(str1[i])){
            k=0;
            strcpy(temp, empty);
        }
        i++;
        if(strlen(largest)<strlen(temp)){
            strcpy(largest,temp);
        }
        j++;
    }
    printf("String is %s", str1);
    printf("Largest word is: %s\n", largest);
}
void printMaxLetter(char str1[]){
    printf("\n---------------MAX OCCURENCE OF LETTER FUNCTION---------------\n");
    int i=0,j=0,count=1,temp=0;
    char ch;
    for(i=0;i<strlen(str1)-1;i++){
        for(j=i+1;j<strlen(str1);j++){
            if(str1[i]==str1[j]){
                count++;
                if(temp<count){
                    temp=count;
                    ch=str1[i];
                }
            }
        }
        count=1;
    }
    printf("String is %s", str1);
    printf("The character %c occures %d times", ch, temp);
}

void pointerOperations(){
    int a[] = {10, 20, 30};
    int i=0;
    int *ptr[3]; //ptr which stores address of a
    for(i=0;i<3;i++){ptr[i] = &a[i];}
    int **ptr1[3]; //stores address of ptr
    for(i=0;i<3;i++){ptr1[i] = &ptr[i];}
    int ***ptr2[3]; //stores address of ptr1
    for(i=0;i<3;i++){ptr2[i] = &ptr1[i];}
    for(i=0;i<3;i++){ printf("\n%d", ***ptr2[i]);}
    int b = 10;
    printf("\nValue of b: %d", b);
    func1(&b);
    printf("\nAfter function call value of b is: %d", b);
    int *point = (int*) (&a+1);
    int *point1 = &a;
    int *point2 = (&a+1);
    printf("\n&a value is: %d", *point1);
    printf("\n&a address is %d: ", &a);
    printf("\n&a+1 value is: %d", *point2);
    printf("\n*(point-1) points to: %d", *(point-1));
    printf("\na+1 points to: %d", a+1);
    printf("\n*(a+1) points to: %d", *(a+1));
}
void func1(int *pointer){

    printf("\nFunc1 function is working");
    ++*pointer;
}

void compare(){
    char str1[50]="one";
    char str2[50]="abc";
    if(str1>str2){
        printf("Str1 is greater");
    }
    if(str1<str2){
        printf("Str2 is greater");
    }
}