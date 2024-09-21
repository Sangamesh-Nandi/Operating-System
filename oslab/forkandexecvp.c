#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>
#include <stdlib.h>
#include <sys/types.h>
int main() {
    char *cn="ls";
char *argv[] = {"ls", "-l", NULL};
printf("befor execvp()\n");
pid_t p=fork();
int stutas=0;
if (p==0)
{
printf("child");
int stutas=execvp(cn,argv);
if (stutas==-1)
{
printf("incorrect ter\n");
}
}else
{
printf("parent\n");
printf("stustas:%d\n",stutas);
printf("Now this line will de ex");
}
}
