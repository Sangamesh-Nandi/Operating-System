#include<unistd.h>
#include<stdio.h>
#include<sys/types.h>

int main()
{
pid_t p=fork();
if (p<0)
{
printf("forkfail\n");
}
printf("hello all,my processor id is: %d \n",getpid());
}

