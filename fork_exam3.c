#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
int main(){ 
int cpid = fork(); 
if (cpid == 0) 
printf("child here.\n"); 
else 
printf("parent here.\n");
printf("who is here.\n"); 
return 0;
}