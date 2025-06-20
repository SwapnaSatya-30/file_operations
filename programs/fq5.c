#include <stdio.h>  
#include <stdlib.h>

int main() {
    const char *oldName = "oldname.txt";
    const char *newName = "newname.txt";

    
     if(rename(oldName, newName) ==0)
     {
	     printf("renamed succesfully");
     }

    return 0;
}

