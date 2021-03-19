#include <stdio.h>
#include <sys/ipc.h>
#include <fcntl.h>
#include<string.h>
#include<stdlib.h>
#define MAX 255
struct mesg
{
long type;
char mtext[MAX];
} *mesg;
char buff[MAX];
int main()
{
int mid,fd,n,count=0;;
if((mid=msgget(1006,IPC_CREAT | 0666))<0)
{
printf("Can’t create Message Q\n");
exit(1);
}
printf("Queue id:%d\n", mid);
mesg=(struct mesg *)malloc(sizeof(struct mesg));mesg ->type=6;
fd=open("fact",O_RDONLY);
while(read(fd,buff,25)>0)
{
strcpy(mesg ->mtext,buff);
if(msgsnd(mid,mesg,strlen(mesg ->mtext),0)== -1)
printf("Message Write Error\n");
else
printf("%s",buff);
}
if((mid=msgget(1006,0))<0)
{
printf("Can’t create Message Q\n");
exit(1);
}
while((n=msgrcv(mid,&mesg,MAX,6,IPC_NOWAIT))>0)
write(1,mesg->mtext,n);
count++;
if((n==-1)&(count==0))
printf("\nNo Message Queue on Queue:%d\n",mid);
return 0;
}