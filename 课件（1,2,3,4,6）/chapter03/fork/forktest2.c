#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
main()
{
	pid_t id;
	id=fork();
	if(id<0)
		printf("fork error\n");
 	else if(id==0)
		printf("I am child,my process ID is %d\n",getpid());
 	else
		printf("I am parent,my process ID is %d\n",getpid());

}
