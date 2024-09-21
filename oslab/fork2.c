#include <unistd.h>
#include <stdio.h>
#include <sys/types.h>
int main()
{
pid_t p=fork();
if (p==0)
{
printf("\nI am a child process with id:%d", getpid());
printf("\nmy parent id %d", getpid());
}
else
{
printf("\ni am a parent process with id %d", getpid());
printf("\nmy child process is:%d",p);
}
return 0;
}
