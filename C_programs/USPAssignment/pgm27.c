#define _POSIX_SOURCE
#define _POSIX_C_SOURCE 199309L
#include<stdio.h>
#include<unistd.h>
int main()
{
int res;
if((res=sysconf(_SC_CLK_TCK))==-1)
printf("System does not support\n");
else
printf("Number of Clock Tick:%d\n",res);
if((res=sysconf(_SC_CHILD_MAX))==-1)
printf("System does not support\n");
else
printf("Maximum Number of Child Process that process can create:%d\n",
res);
if((res=pathconf("/", _PC_PATH_MAX))==-1)
printf("System does not support\n");
else
printf("Maximum Path Length:%d\n",res);
if((res=pathconf("/", _PC_NAME_MAX))==-1)
printf("System does not support\n");
else
printf("Maximum No.of Character in a filename:%d\n",res);
if((res=sysconf(_SC_OPEN_MAX))==-1)
printf("System does not support\n");
else
printf("Maximum Number of opened files per process:%d\n",res);
return 0;
}