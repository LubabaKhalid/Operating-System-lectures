#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
int main(){ 
int cpid = fork(); 
if (cpid == 0){ 
printf("Terminating child with PID = %ld\n", (long)getpid()); 
exit (0); 
} 
else{ 
printf("Running parent, PID=%ld\n",(long)getpid()); 
while(1); 
} 
return 0;
}