#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
main()
{
	pid_t id;
	printf("hello Linux!\n");
	id=fork();
	if(id<0)
		printf("fork error\n");
 	else if(id==0)
		printf("child\n");
 	else
		printf("parent\n");

}
