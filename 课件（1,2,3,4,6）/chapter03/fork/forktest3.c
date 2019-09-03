#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
main()
{
	pid_t id;
	int i;
	id=fork();
	if(id<0)
		printf("fork error\n");
 	else if(id==0)
		for(i=0;i<5;i++)
		{
			printf("BBBBBBBBBBBB\n");
			sleep(2);
		}
 	else{   wait(NULL);
		for(i=0;i<5;i++)
		{
			printf("AAAAAAAAAAAAAAA\n");
			sleep(2);
		}
}
}
