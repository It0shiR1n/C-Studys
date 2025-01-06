#include <stdio.h>


int main(){

    int num = 10;
    int *p_num = &num;

    printf("valor da var: %d\n", num);
    printf("valor da var por referência: %d\n", *p_num);
    printf("valor do endereço da var: %p\n\n", p_num);

    int arrNumbers[5] = {0, 1, 2, 3, 4};
    int *p_arrNumbers = &arrNumbers[0];    

    printf("Posição 0 do array: %d\n", *p_arrNumbers);
    printf("Endereço da posição 0 do array: %p\n\n", p_arrNumbers);
    p_arrNumbers++; // descola 4 bytes para frente automaticamente a nível de ponteiro devido ao compilador
    
    printf("Posição 1 do array: %d\n", *p_arrNumbers);
    printf("Endereço da posição 1 do array %p\n\n", p_arrNumbers);

    
    return 0;
}