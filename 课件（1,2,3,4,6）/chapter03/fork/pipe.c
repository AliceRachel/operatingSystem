#include  <unistd.h>
int main(void)
{
    int  x, fd[2];
    char buf1[40],buf2[40];
    if(pipe(fd) < 0)   /*创建管道*/
    {
           perror("could not make pipe");
           exit(1); 
    }
    x=fork();
    if(x== -1)
    {
            perror("fork erro");
            exit(1);
    }
    if(x==0)/*子进程*/
    {
            close(fd[0]);
            sprintf(buf1,"hello");
            write(fd[1],buf1,40);
            exit(0);
    }
    else/*父进程*/
    {
            close(fd[1]);
            wait(NULL);
            read(fd[0],buf2,40); /*父进程读管道字符*/
            printf("%s\n",buf2); /*输出该字符串*/
    }
}

