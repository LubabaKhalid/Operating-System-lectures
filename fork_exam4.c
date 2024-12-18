#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int gvar = 555;

int main() {
    int lvar = 54;
    int cpid = fork();

    if (cpid == 0) {
        printf("Child process PID=%ld, gvar=%d, lvar=%d\n", (long)getpid(), gvar, lvar);
    } else {
        printf("Parent process PID=%ld, gvar=%d, lvar=%d\n", (long)getpid(), gvar, lvar);
    }

    return 0;
}
