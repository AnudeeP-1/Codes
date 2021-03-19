#include<signal.h>
#include<stdio.h>
#include<unistd.h>
#include<errno.h>
void wakeup()
{
printf("Hello\n");
printf("---------------------------------\n");
}
int main()
{
int i;
struct sigaction action;
action.sa_handler=wakeup;
action.sa_flags=SA_RESTART;
sigemptyset(&action.sa_mask);#if(sigaction(SIGALRM,&action,0)==-1)
{
perror("sigaction");
}
while(1)
{
alarm(5);
pause();
printf("Waiting For Alarm\n");
}
return 0;
}
#else
printf("System does not support saved set-UID\n");
#endif
#ifdef _POSIX_CHOWN_RESTRICTED
printf("System Supports Change Ownership feature\n");
#else
printf("System does not support change Ownership feature\n");
#endif
#ifdef _POSIX_NO_TRUNC
printf("System Supports Path truncation option\n");
#else
printf("System does not support Path truncation \n");
#endif
#ifdef _POSIX_VDISABLE
printf("System Supports Disable Character for files\n");
#else
printf("System does not support Disable Characters \n");
#endif
return 0;
}