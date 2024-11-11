#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
int main(){ 
    int cpid = fork(); 
    if (cpid == 0){ 
    wait(NULL);
    execl("/usr/bin/gnome-calculator", "mycalc",NULL); 
    printf("This line will not be printed\n"); 
    } 
    else{ 
    wait(NULL); 
    printf("Hello I m Parent.\n"); 
    } 
    return 0;
}