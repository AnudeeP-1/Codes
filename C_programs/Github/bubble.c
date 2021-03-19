#include <stdio.h>


void bubbleSort(int arr[], int n)
{
    int i,j,temp;
   for(i=0;i<n;i++){
       for(j=0;j<n;j++){
        if(arr[i]<arr[j]){
           temp=arr[i];
           arr[i]=arr[j];
           arr[j]=temp;
        }
       }
   }
}

/* Function to print an array */
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}


int main()
{
    int arr[] = {100, 75, 25, 150, 10, 45, 32, 99};
    int n = sizeof(arr)/sizeof(arr[0]);
    bubbleSort(arr, n);
    printf("Sorted array: \n");
    printArray(arr, n);
    return 0;
}