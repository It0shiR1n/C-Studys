#include <stdio.h>
#include <stdlib.h>

int main(){
    int *ptr = malloc(sizeof(int));

    if (ptr == NULL){
        printf("Can't allocate memory");
        exit(1);
        
    }

    free(ptr);
    return 0;


    // memory problems

    // Memory leak: a memory allocated doesn't acessible and not free correctly.
    // Memory corruption: writte into over memory allocated resulting in indetermined behvaior.
    // Memory fragmentation: reduces the program performance
  
}