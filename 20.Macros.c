#include <stdio.h>

#define CONSTANT_DEFINE 3.1415
#define QUADRADO(x) (x * x)

#ifndef DEBUG
    #define DEBUG

    #ifdef DEBUG 
        printf("Debug mode ON");
    #else
        printf("Debug mode OFF");
    #endif 
#else
    #ifdef DEBUG 
        printf("Debug mode ON");
    #else
        printf("Debug mode OFF");
    #endif 
#endif