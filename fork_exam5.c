#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int main() {
    int i, cpid, ctr = 0;
    cpid = fork();  // Create a child process

    if (cpid == 0) {
        // Child process
        ctr = 100;  // Set counter for child
        for (i = 0; i < 3; i++) {
            printf("Child counter is: %d\n", ctr++);
        }
    } else if (cpid > 0) {
        // Parent process
        for (i = 0; i < 3; i++) {
            printf("Parent counter is: %d\n", ctr++);
        }
        wait(NULL);  // Wait for the child to finish before parent exits
    } else {
        // Fork failed
        perror("fork failed");
        exit(1);
    }

    return 0;
}
