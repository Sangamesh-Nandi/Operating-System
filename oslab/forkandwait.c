#include <unistd.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/wait.h>

int main() {
    pid_t p = fork();

    if (p < 0) {
        printf("Fork failed\n");
        return 1;
    }
    if (p == 0) {

        printf("child process:%d\n", getpid());
    } else {
        printf("parent process:%d\n", getpid());
        wait(NULL);
        printf("child has terminated:%d\n", p);
    }

    printf("bye\n");
    return 0;
}
