#include <fcntl.h>      
#include <unistd.h>     

int main() 
{
  
    int fd = open("hello.txt", O_WRONLY, 0644);

    write(fd, "Hello, World!\n", 14);

    close(fd);

    return 0;
}



