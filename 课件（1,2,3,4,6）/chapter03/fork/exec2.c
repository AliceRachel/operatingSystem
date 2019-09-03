#include <stdio.h>
#include <sys/types.h>  
#include <unistd.h>
int main()	
{   
    pid_t id=0;
    char *parameter[3];
    parameter[0] = "lsp";
    parameter[1] = "-a";
    parameter[2] = 0 ;
    
    id=fork();
    if(id==0)
    {
        execvp( "lsp" , parameter );
	printf("cannot execute the command!\n");
    }
    else
    {
       wait(NULL);
       printf("* * * ls is done. bye\n");
       printf("* * * BBBBBBBBBB*****\n");
    }
return 1;
}

