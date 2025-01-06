#include <stdio.h>


/*

    fopen()  | - Open a file

    fwrite() | - Write bytes into a file
    fread()  | - Read bytes from a file 

    fclose() | - Close a file 


*/


typedef struct {
    int id;
    float value;

} Data;


int main(){
    FILE *file; 
    
    Data data_in = {1, 3.1415};
    Data data_out;    
    
    //char text[12] = "Salve Irmão";
    //size_t written_size2 = fwrite(&text, sizeof(char), 12, file);
    
    file = fopen("example.txt", "wb");

    if (file == NULL){
        printf("can't open the file");
        return 1;
    }

    
    size_t written_size = fwrite(&data_in, sizeof(Data), 1, file);

    if (written_size != 1){
        printf("can't write the file");
        return 1;
        
    }

    
    size_t read_size = fread(&data_out, sizeof(Data), 1, file);

    if (read_size != 1){
        printf("can't read the file");
        return 1;
        
    }

    printf("id: %d", data_out.id);
    printf("value: %f", data_out.value);
    fclose(file);
  
}