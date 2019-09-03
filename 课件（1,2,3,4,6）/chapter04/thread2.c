#include <stdio.h>
#include <pthread.h>
#include <sys/types.h>
void thread(void)
{	int i,sum=0;
	for(i=1;i<=10;i++)
	{	sum=sum+i;
		sleep(1);
	}
	printf("The sum is %d\n",sum);
}
int main()
{	pthread_t id,id1;
	int i,ret;
	char  buf[80];
	ret=pthread_create(&id,NULL,(void *) thread,NULL);
	while(1)
	{	printf("please input a string\n");
		scanf("%s",buf);
		printf("This string is %s\n",buf);
	}
	pthread_join(id,NULL);
	return (0);
}

