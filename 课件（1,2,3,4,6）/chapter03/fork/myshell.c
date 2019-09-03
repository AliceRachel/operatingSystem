#include <stdio.h>
#include <string.h>
 main()
{ char cmd[100]; 
  char *argv[2];
  while(1)
  { printf("%%"); 
    scanf("%s",cmd);
    if(strcmp(cmd,"exit")==0) 
       break;
    argv[0]=cmd;
    argv[1]=0;
    if(fork()>0)
    { 
       wait(NULL);
       continue;
    }
    else
    {
      execvp(cmd,argv);
      printf("cannot excute the command!\n");
      exit(1);
      	
    }
  }
}

