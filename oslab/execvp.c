#include <stdio.h>
#include <unistd.h>

int main() {
    char *cn="ls";

char *argv[] = {"ls", "-l", NULL};
printf("befor execvp()\n");
int stutas=execvp(cn,argv);
printf("stustas:%d\n",stutas);
printf("Now this line will de ex");
}
