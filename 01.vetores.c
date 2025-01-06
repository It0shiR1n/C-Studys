/*
Crie um programa em C que declare uma variável int e uma variável char. Atribua a eles valores
fornecidos pelo usuário. Em seguida, incremente cada um várias vezes (o número de vezes
também é fornecido pelo usuário) e imprima os resultados.
*/ 

#include <stdio.h>

int main(){
    int vecNumbers[5] = {1, 2, 3, 4, 5};

    for (int i = 0; i < 5; i++){
        if(vecNumbers[i] % 2 == 0){
            printf("%d\n", vecNumbers[i]);
            
        }
        
    }

    return 0;
  
}