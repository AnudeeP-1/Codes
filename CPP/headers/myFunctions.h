#ifndef MYFUNCTIONS_H
#define MYFUNCTIONS_H

int * bubbleSort(int a[], int count){
    static int b[100];
    for(int i=0;i<count;i++)
        b[i]=a[i];
    int temp;
    for(int i=0;i<count;i++){
        for(int j=0;j<count-i-1;j++){
            if(b[j]>b[j+1]){
                temp=b[j];
                b[j]=b[j+1];
                b[j+1]=temp;
            }
        }
    }
    return b;
}

#endif