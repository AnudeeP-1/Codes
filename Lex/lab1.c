#include<stdio.h>
#include<string.h>
int n,m,i,j;
int Allocation[10][10], Max[10][10], Need[10][10], Available[10];
struct processInfo
{
int ProcIndex;
int Finish;
}Process[20];
void getInput()
{
printf("\nEnter the total no of process in the system:");
scanf("%d",&n);
printf("Enter the total no of resources types:");
scanf("%d",&m);
printf("Default name slected for Process are:");
for(i=0;i<n;i++)
{
printf("P%d ,", i);
Process[i].ProcIndex=i;
}
printf("\nEnter Available Vector:<Maximum resources available>:");
for(i=0;i<m;i++)
{
scanf("%d",&Available[i]);
}
printf("\nEnter Max demand of each process:-\n");
for(i=0;i<n;i++)
{
printf("P%d:",Process[i].ProcIndex);
for(j=0;j<m;j++)
{
scanf("%d",&Max[i][j]);
}
}
printf("\nEnter Allocation matrix:-\n");
for(i=0;i<n;i++)
{
printf("P%d:",Process[i].ProcIndex);
for(j=0;j<m;j++)
{



scanf("%d",&Allocation[i][j]);
}
}
//Calculate need matrix: Need=Max-Allocation
printf("Need Matrix\n");
for(i=0;i<n;i++)
{
printf("\nP%d:",Process[i].ProcIndex);
for(j=0;j<m;j++)
{
Need[i][j]=Max[i][j]-Allocation[i][j];
printf(" %d",Need[i][j]);
}
}
}
/* Banker's algorithm 1st Part : Safety algorithm */
int checkSafety()
{
int Work[10];
int count=0;
for(i=0;i<m;i++)
{
Work[i]=Available[i];
}
for(i=0;i<n;i++)
{
Process[i].Finish=0;
}
i=0;
printf("\nSafe sequence (if any>: ");
while(1)
{
count++;
if(Process[i].Finish)
i++;
else
{
for(j=0;j<m;j++)
{
if(Need[i][j]>Work[j])
break;

}
//at the end of iteration...
if(Process[i].Finish==0&&j==m)
{
Process[i].Finish=1;
printf("P%d ",Process[i].ProcIndex);
for(j=0;j<m;j++)
Work[j]=Work[j]+Allocation[i][j];

}
i=++i%n;
for(j=0;j<n;j++)
{
if(Process[j].Finish==0)
break;
}
if(j==n)



{
printf("\nSystem is safer!...\n ");
return 1;
}
if (count>100)
{
printf("\nUnSafe! system would leads to deadlock state....\n");
return 0;
}
}
}//while
}//function
/* Banker's algorithm 2nd Part : New Resource request algorithm */
void NewRequest()
{
int NewRequest[10];
int Index;
printf("\nEnter the Process Index for additional request:");
scanf("%d",&Index);
printf("\nEnter resource request for Process P%d:",Index);
for(j=0;j<m;j++)
{
scanf("%d",&NewRequest[j]);
}
for(j=0;j<m;j++)
{
if(NewRequest[j]>Need[Index][j])
{
printf("\nERROR: Request is greater than Need!!!!...\n So the Request cannot be granted\n");

break;
}
}
for(j=0;j<m;j++)
{
if(NewRequest[j]>Available[j])
{
printf("\nERROR:Request is greater than Available!!!!..\n So the Request cannot be granted\n");
break;
}
}
if(j==m)
{
for(j=0;j<m;j++)
{
Allocation[Index][j]=Allocation[Index][j]+NewRequest[j];
Need[Index][j]=Need[Index][j]-NewRequest[j];
Available[j]=Available[j]-NewRequest[j];
}
if(checkSafety())
printf("\nResource Request is granted..\n");
else
printf("\nResource Request is not granted!!\n");
}
}


int main()
{
printf("\n***Bankers Algorithm Simulation***:\n");
getInput();
checkSafety();
NewRequest();
return(0);
}
