#include <stdio.h>      
#include <stdlib.h>  
#include <sys/stat.h>   
#include <sys/types.h>  

int main() 
{
    const char *dirname = "Test";    
    mode_t mode = 0755;             

 
    if (mkdir(dirname, mode) == 0) 
    {
        printf("Directory '%s' created successfully.\n", dirname);
    } 
    else {

        perror("Failed to create directory");  
        exit(1);
    }

    return 0;
}

