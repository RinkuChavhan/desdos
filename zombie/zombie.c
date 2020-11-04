#include <stdio.h>
#include <unistd.h>

int main()
{
    pid_t id;

    id=fork();

    if(0==id)
    {//Child
        printf("Child starting\n");
        sleep(2);
        printf("Child exiting\n");
    }
    else
    {
        printf("Parent starting\n");
        sleep(12);
        printf("Parent exiting\n");
    }
    return 0;
}