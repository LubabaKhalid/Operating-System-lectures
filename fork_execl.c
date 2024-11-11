#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int main() {
    int cpid = fork();

    if (cpid == 0) {
        execl("/bin/ls", "myls", "-l", "/home/", NULL);
        printf("This line will not be printed if execl() succeeds\n");
    } else if (cpid > 0) {
        wait(NULL);
        printf("Hello, I am Parent.\n");
    } else {
        perror("fork failed");
        exit(1);
    }

    return 0;
}
