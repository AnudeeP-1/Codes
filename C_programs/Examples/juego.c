#include<stdio.h>
#include<string.h>

void findPair();
void removeRepeted();
void sortedArray();
void pattern1();
void pattern2();
void pattern3();
void pattern4();
void jugoQ1();
void jugoStr();
void sortStrings();
void pattern5();
void longestCommonPrefix();
void longestCommonPrefixProper();
void permutation();

void main(){
    int a[100],i=0;
    a[0] = 5;
    a[1] = 5;
    a[2] = 6;
    a[3] = 5;
    a[4] = 5;
    a[5] = 7;
    a[6] = 5;
    a[7] = 5;
   //findPair(a);
   //pattern1();
   //pattern2();
   //pattern3();
   //pattern4();
   //pattern5();
   
   jugoStr();
   //sortStrings();
   //longestCommonPrefix();
   //longestCommonPrefixProper();
   //permutation();
}

void findPair(int a[100]){
    int i=0,j=0,count=0,b[10],c=0;
    for(i=0;i<8;i++){
        for(j=0;j<8;j++){
            if (a[i]==a[j]){       
                count++;
            }
        }
        if(count%2!=0){
            b[c++]=a[i];
        }
        count=0;
    }
    i=0;
    int size=0;
    for(i=0;b[i]!=0;i++){
        size++;
    }
    sortedArray(b, size);
}

void sortedArray(int a[], int size){
    int i=0,j=0,temp;
    for(i=0;i<size;i++){
        for(j=0;j<size;j++){
            if(a[i]<a[j]){
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    removeRepeted(a, size);
}

void removeRepeted(int a[], int size){
    int i=0,j=0, count=1;
    printf("Size of b is: %d\n", size);
    for(i=0;i<size;i++){
        if(a[i]!=a[i+1]){
            printf("%d ", a[i]);
        }
    }
}

void pattern1(){
    while (1){
        int lines;
        printf("Enter the lines");
        scanf("%d", &lines);
        int i, j;
        for(i=0;i<=lines;i++){
            for(j=0;j<i;j++){
                printf("%d ", i-j);
            }
            printf("\n");
        }
        for(i=lines-1;i>0;i--){
            for(j=0;j<i;j++){
                printf("%d ", i-j);
            }
            printf("\n");
        }
    }
}

void pattern2(){
    while(1){
        int max,j;
        printf("Enter the no of lines");
        scanf("%d", &max);
        for(int i=0;i<max+1;i++){
            for(j=0;j<max-i;j++){
                printf(" ");
            }
            for(int k=0;k<max-j;k++){
                printf("* ");
            }
            printf("\n");
        }
    }
}

void pattern3(){
    while(1){
        int lines, j, l=0;
        printf("Enter the number of lines: ");
        scanf("%d", &lines);
        for(int i=0;i<lines+1;i++){
            for(j=0;j<lines-i;j++){
                printf("  ");
            }
            for(int k=0;k<2*i-1;k++){
                printf("* ");
            }
            printf("\n");
        }
    }
}

void pattern4(){
    int i=0,j=0,k=0,n;
    while(1){
        printf("Enter n value");
        scanf("%d", &n);
        for(i=1;i<=n;i++){
            for(j=1;j<=n;j++){
                for(k=1;k<=i;k++){
                    printf("%d",k+j-1);
                }
                if(j==n){
                    printf(" ");
                }
                else{
                    printf(".");
                }
            }
        }
    }
}

void jugoQ1(){
    char str[50]="he.th";
    char rev[50];
    int i=0,count=0,max;
    // printf("Enter the string");
    // fgets(str, sizeof(str), stdin);
    printf("%s", str);
    while(str[i]!='\0'){
        i++;
    }
    count=i-1;
    max=count;
    for(i=0;i<=count;i++){
        rev[i]=str[max];
        max--;
    }
    // printf("\n%s", rev);
    int j=0;
    i=0;
    char rev1[50];
    while(rev[j]!='\0'){
        if(rev[j]=='.'){
            while(rev[i]!='\0'){
                i++;
            }
            count=i-1;
            max=count;
            for(i=0;i<=count;i++){
                rev1[i]=rev[max];
                max--;
            }
        }
        j++;
        i=0;
        
    }
    printf("\n%s", rev1);
}

void jugoStr(){
    char str[50];
    char rev[50][50];
    int m=0,n=0;
    printf("Enter the string:\n");
    fgets(str, sizeof(str), stdin);

    for(int i=0;str[i]!='\0';i++){
        if(str[i]=='.'){
            rev[m][n]='\0';
            m++;
            n=0;
        }else{
            rev[m][n]=str[i];
            n++;
        }
    }
    rev[m][n-1]='\0';
    char rev2[50][50];
    int x=0,y=0;
    for(int j=m;j>=0;j--){
        for(int k=0;rev[j][k]!='\0';k++){
            rev2[x][y]=rev[j][k];
            y++;
        }
        x++;
        y=0;
    }
    for(y=0;y<x;y++){
        printf("%s",rev2[y]);
        if(y<x-1)
        printf(".");
    }
}

void sortStrings(){
    char str[25][25], temp[50];
    int n;
    printf("Enter the no of strings\n");
    scanf("%d", &n);
    for(int i=0;i<=n;i++){
        fgets(str[i], sizeof str, stdin);
    }
    // for(int i=0;i<=n;i++){
    //     printf("%s", str[i]);
    // }

    //proper


    // for(int i=1;i<=n;i++)
    //     for(int j=0;j<=n-i;j++)
    //         if(strcmp(str[j],str[j+1])>0){
    //             strcpy(temp,str[j]);
    //             strcpy(str[j],str[j+1]);
    //             strcpy(str[j+1],temp);
    //         }
    for(int i=1;i<=n;i++)
        for(int j=1;j<=n-i;j++)
            if(str[j]<str[j+1]){
                for(int x=0;str[j][x]!='\0';x++){
                    temp[x]=str[j][x];
                }
                for(int x=0;temp[x]!='\0';x++)
                    str[j][x] = str[j+1][x];
                for(int x=0;str[j][x]!='\0';x++){
                    temp[x]=str[j][x];
                }
            }
    for(int i=0;i<=n;i++)
    printf("%s",str[i]);
}

void pattern5(){
    int n;
    while(1){
        printf("Enter n value\n");
        scanf("%d", &n);
        int count=0,temp=n/2,flag=0;
        for(int i=0;i<=n/2;i++){
            while(count!=n){
                if(i>0){
                    if(count==temp){
                        for(int k=0;k<2*i-1;k++){
                        printf("  ");
                        count++;
                        flag=1;
                        }
                    }
                }
                if(flag!=1){
                    printf("* ");
                    count++;
                }
                flag=0;
            }
            if(i>0)
                temp=temp-1;
            printf("\n");
            count=0;
        }
        count=0;
        int counter=2;
        for(int i=0;i<n/2;i++){
            while(count<n){
                if(i+2==counter){
                    if(count==n-i-1){
                        for(int j=0;j<counter-1;j++){
                            printf("* ");
                            count++;
                        }
                    }
                    else{
                        for(int j=0;j<counter;j++){
                            printf("* ");
                            count++;
                        }
                    }
                }
                if(count<n)
                for(int k=0;k<n-2*counter;k++){
                    printf("  ");
                    count++;
                }
            }
            printf("\n");
            count=0;
            counter++;
        }
    }
}

void longestCommonPrefix(){
    int words=3;
    char a[50][50];
    for(int i=1;i<=words;i++){
        scanf("%s", a[i]);
    }
    char temp[50],temp2[50];
    int k=0,l=0;
    for(int i=1;i<words;i++){
        for(int j=0;a[i+1][j]!='\0';j++){
            if(a[i][j]==a[i+1][j]){
                temp[k++]=a[i][j];
            }
        }
        l=k;
        k=0;
    }
    for(int i=0;i<l;i++)
    printf("%c", temp[i]);
}

void longestCommonPrefixProper(){
    int t,count=0;
    scanf("%d",&t);
    int words;
    char a[50][50];
    for(int i=1;i<=t;i++){
        scanf("%d", &words);
        for(int i=1;i<=words;i++)
            scanf("%s", a[i]);
        char temp[50],temp2[50];
        int k=0,l=0;
        for(int i=1;i<words;i++){
            for(int j=0;a[i+1][j]!='\0';j++){
                if(a[i][j]==a[i+1][j]){
                    temp[k++]=a[i][j];
                }
            }
            l=k;
            k=0;
        }
        for(int i=0;i<l;i++)
        printf("%c", temp[i]);
    }
}

void permutation(){
    char a[50];char b[50][50];
    int j=1,count=0,counter=0;
    printf("Enter string ");
    fgets(a, sizeof a, stdin);
    for(int i=0;a[i]!='\n';i++){
        if(a[i]==' ')
        count++;
    }
    for(int i=1;i<=count+1;i++){
        for(int j=0;a[j]!=' ';j++){
            b[i][j]=a[counter];
            counter++;
        }
        counter++;
    }
    for(int i=1;i<count+1;i++)
    printf("%s", b[i]);
}