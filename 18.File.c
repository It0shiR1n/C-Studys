#include <stdio.h>


int main(){

    FILE *file;
    file = fopen("example.txt", "r");

    //fopen()    | - Opening and Creating
    
    //fputc      | 
    //fputs      | - Writing 
    //fprintf()  |
    //fscanf()   |
    
    //fgetc()    | - Reading 
    //fgets()    | 

    //fclose()   | - Closing 

    // https://www.man7.org/linux/man-pages/man3/fopen.3.html
    // b: Binary mode, useful to receive exe and elf files from the network and write into a file

    if (file == NULL){
        printf("can't open the file");
        
    }else {
        // file operations
        fclose(file);
    }


    return 0;
}