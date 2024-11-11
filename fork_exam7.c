#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int main(int argc, char *argv[]) {
    
    int n =2 ;
    int i;
    for (i = 1; i <= n; i++) {
        fork();
        printf("PUCIT\n");
    }
    printf("lubaba  ");
    exit(0);
}
