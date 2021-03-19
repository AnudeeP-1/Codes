#include <fcntl.h>
#include <sys/stat.h>
#include <stdio.h>
int main(int argc, char **argv)
{
FILE *fd1;
int n,count=0;
char buf;
fd1=fopen(argv[1],"r");
while(!feof(fd1))
{
buf=fgetc(fd1);
if(buf==' ')
count=count+1;
}
printf("\n Total Blanks= %d\n",count);
return (0);
}