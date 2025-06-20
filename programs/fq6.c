#include <stdio.h>   
#include <stdlib.h>  

int main() {
    const char *filename = "newname.txt";

    
    if (remove(filename) == 0) {
        printf("File '%s' deleted successfully.\n", filename);
    } 

    return 0;
}

