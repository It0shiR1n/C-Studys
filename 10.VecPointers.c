#include <stdio.h>
#include <stdlib.h>

int main(){

    int vetor[5] = {1, 2, 3, 4, 5};
    int *p_data_vetor = &vetor[0];         // Pega um dado especifico no vetor 
    int *p_vetor = vetor;                  // Pega o endereço de inicio do vetor
    
    //printf("posição 1: %d\n", *p_vetor);    
    //printf("posição 2: %d\n", *(p_vetor+1));

    // Utilizando FOR
    
    for(int i = 0; i <= 4; i++){
        printf("Indice %d: %d\n", i, *(p_vetor + i)); 
        
    }
    
    free(p_vetor);
    
    return 0;
}