#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
int main(){
for (int i=1;i<=4;i++){
fork();
fprintf(stderr, "%s\n","ARIF");
}
exit(0);
}