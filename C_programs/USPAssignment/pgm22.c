#include<stdio.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
#include<stdlib.h>
int main()
{
for(int i=0;i<5;i++) // loop will run n times (n=5)
{
if(fork() == 0)
{
printf("[children] pid %d from [parent] pid %d\n",getpid(),
getppid());
exit(0);
}
}for(int i=0;i<5;i++) // loop will run n times (n=5)
wait(NULL);
}