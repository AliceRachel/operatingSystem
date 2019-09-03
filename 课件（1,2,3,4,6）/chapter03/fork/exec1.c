#include <stdio.h>
#include <unistd.h>
int main()	
{   printf("* * * About to exec ls -l\n");
    printf("* * * AAAAAAAAA*****\n");
    execlp( "/bin/ls" , "ls",NULL );
     printf("* * * BBBBBBBBBB*****\n");
return 1;
}

