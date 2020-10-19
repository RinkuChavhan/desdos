#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

int main()
{
    printf("Hello %d\n",3); //buffer 
    printf("World \n");
    return 0;
}