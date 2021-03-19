#include<fcntl.h>
#include<sys/stat.h>
#include<stdio.h>
int main(int argc, char **argv)
{
int fd1;
int n,count=0;char buf;
fd1=open(argv[1],O_RDONLY);
while((n=read(fd1,&buf,1))>0)
{
if(buf==' ')
count=count+1;
}
printf("\n Total Blanks= %d\n",count);
return (0);
}