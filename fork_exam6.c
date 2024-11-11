#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
int main(){ 
    fork(); 
    fork(); 
    
    printf("Hello fork...\n"); 
    return 0;
}