#include <fcntl.h>     // for open()
#include <unistd.h>    // for close()
#include <stdio.h>     // for printf(), perror()
#include <stdlib.h>    // for exit()

int main() {
    const char *filename = "sample.txt";
    int fd;   

    
    fd = open(filename, O_RDONLY);

    if (fd >= 0) {
        printf("File '%s' exists in the current directory.\n", filename);
        close(fd); 
    } else {
        perror("File check failed");
        printf("File '%s' does NOT exist in the current directory.\n", filename);
    }

    return 0;
}

