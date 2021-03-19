#include <stdio.h>

int main(){
    char *c[] = {"GeksQuiz", "MCQ", "TEST", "QUIZ"};
    char **cp[] = {c+3, c+2, c+1, c};
    char ***cpp = cp;
    // printf("\n%d", *c);
    // printf("\n%s", *c);
    // printf("\nIam working");
    // printf("%s", **cp);
    // printf("\nIam working");
    // printf("\n%c", ***cpp);
    // printf("\nIam working");
    

    printf("%s ", **++cpp);
    printf("%s ", *--*++cpp+3);
    printf("%s ", *cpp[-2]+3);
    printf("%s ", cpp[-1][-1]+1);
    return 0;
}