#include<stdio.h>
int main()
{
int p_id,var;
p_id = fork();
var++;
if(p_id<0)
{
printf("child creation failed");
}
else if(p_id==0)
{
printf("child process\n");
printf("child id=%d",getpid());
printf("parent id=%d",getpid());
printf("child process completed");
}
else
{
wait(NULL);
printf("parent process\n");
printf("parent id=%d",getpid());
printf("parent process completed");
}
return 0;
}
