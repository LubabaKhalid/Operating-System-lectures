#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
int main()
{
int cpid;
cpid = fork();
if (cpid == 0)
{
printf("child here.\n");
printf("CHILD pid = %d\n", getpid());
printf("CHILD ppid = %d\n", getppid());
}
else
{
printf("parent here.\n");
printf("PARENT pid = %d\n", getpid());
printf("PARENT ppid = %d\n", getppid());
sleep(2);
}
return 0;
}