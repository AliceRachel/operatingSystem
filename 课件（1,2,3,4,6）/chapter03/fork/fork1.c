#include <sys/types.h>
#include <stdio.h>
#include <unistd.h>

int value=5;            // where is it £¿ 

int main(){
	
 int i;               // where is it£¿ 
	pid_t pid;	
	for(i=0;i<2;i++){	
		pid=fork();	
		if(pid==0){
			value += 15;
			printf("Child: value = %d\n",value);
		}
		else if(pid>0){
			wait(NULL);
			printf("PARNET: value = %d\n",value);
//exit(0);   
		}
	}
}
