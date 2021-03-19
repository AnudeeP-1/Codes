#include<iostream>
#include<string>
#include "./headers/myFunctions.h"
using namespace std;

void array_arrangement1();
void pattern_of_numbers1();
void pattern_of_numbers2();
void geeks1();
void sec_largest_using_1_for();
void remove_repeated_word();

int main(){
    //array_arrangement1();
    pattern_of_numbers1();
    //geeks1();
    //pattern_of_numbers2();
    //sec_largest_using_1_for();
    //remove_repeated_word();
}

void array_arrangement1(){
    int n,count=0,temp;
    int b[100],a[100];
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>b[i];
        count++;
    }
    int *p;
    p = bubbleSort(b, count);  //bubble sort->sorts given array
    for(int i=0;i<n;i++)
        a[i]=*(p+i);

    //this below line for printing sorted array
    // for(int i=0;i<n;i++)
    //     cout<<a[i]<<" ";
    // cout<<"\n";
    int max=a[count-1];
    int min=a[0];
    for(int i=0;i<count;i++)
        if(a[i]==max)
            cout<<max<<" ";
    for(int i=0;i<count;i++)
        if(a[i]==min)
            cout<<min<<" ";
    for(int i=0;i<max;i++){
        for(int k=0;k<count;k++)
        if(min+i+1==a[k] && a[k]!=max){
            temp=a[k];
            for(int j=0;j<n;j++)
                if(a[j]==temp)
                cout<<temp<<" ";
                break;
        }
    }
}


void pattern_of_numbers1(){
    int n,count=0;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=4;j++){
            if(j==4){
                cout<<count-1;
                count++;
            }
            if(j==3)
                cout<<"0";
            if(j==2){
                cout<<count+2;
                count++;
            }
            if(j==1){
                cout<<count+2;
                count++;
            }
        }
        cout<<" ";
    }
}

void geeks1(){
    int t;
    cin>>t;  
    while(t--){                                     //n=5  sum=12
    	int n, sum, temp,flag=0;                    //1 2 3 7 2 ->array
    	int a[100];                                 //op:-1 3
    	cin>>n;                                     //
    	cin>>sum;
        for(int i=0;i<n;i++)
            cin>>a[i];
    	for(int i=0;i<n;i++){
    	    for(int j=i;j<n;j++){
                temp=temp+a[j];
                if(temp==sum){
                    cout<<i+1<<" "<<j+1;
                    flag=1;
                    break;
                }
            }
            temp=0;
            if(flag==1)
            break;
        }
    }
}

// void pattern_of_numbers2(){
//     int n;
//     cin>>n;
//     int min=0,max=9,count1=0,count2=0;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=3;j++){
//             if(j==1){
//                 if(count1==1){
//                     cout<<max;      //0.9 8.1 2.7 6.3 
//                     max--;          //0.
//                     count1=0;       //c1=1 c2=0
//                 }else{
//                     cout<<min;
//                     min++;
//                     count1=1;
//                 }
//             }
//             if(j==2)
//             cout<<".";
//             if(j==3){
//                 if(count2==1){
//                     cout<<min;
//                     min++;
//                     count2=0;
//                 }else{
//                     cout<<max;
//                     max--;
//                     count2=1;
//                 }
//             }
//         }
//         cout<<" ";
//     }
// }

// /*void sec_largest_using_1_for(){
//     int a[100],large=0,sec_large=0;
//     for(int i=0;i<5;i++)
//         cin>>a[i];           
//     for(int i=0;i<5;i++){
//         if(a[i]>large)
//             large=a[i];
//         if(a[i]>sec_large && a[i]<large)
//             sec_large=a[i];
//     }
//     cout<<sec_large;
// }

void remove_repeated_word(){
    string str = "dfghj";
    string temp[4][10];
    string str2;
    int j=0,k=0;
    for(int i=0;i<str.length();i++){     //i love love coding temp[0][0]=i
        if(str[i]!=' ')                  //                   temp[1][0123]=love
            temp[j][k++]=str[i];         //                   temp[2][0123]=love
        else{
            j++;
            k=0;
        }                             
    }
    for(int i=0;i<=j;i++){
        for(int l=0;temp[i][l]!="";l++){
            cout<<temp[i][l];
        }
        cout<<" ";
    }
    cout<<"\n";
    int z;
    for(int i=0;i<=j;i++){
        for(int l=0;temp[i][l]!="";l++){
            if(temp[i][l]!=temp[i+1][l]){
                cout<<temp[i][l];
            }
            z=l;
        }
        if(temp[i][z]!=temp[i+1][z])
        cout<<" ";
    }
}