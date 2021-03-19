#define _POSIX_SOURCE
#define _POSIX_C_SOURCE 199309L
#include<stdio.h>
#include<unistd.h>
int main()
{
#ifdef _POSIX_JOB_CONTROL
printf("System Supports Job Control feature\n");
#else
printf("System does not support job control\n");
#endif
#ifdef _POSIX_SAVED_IDS
printf("System Supports saved set-UID and saved set-GID\n");
#endif
}