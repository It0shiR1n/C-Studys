#include <stdio.h>


int main(){

    int vecInt[4];

    for(int i = 1; i <= 5; i++){
        printf("Digite um número para a posição %d: ", i);
        scanf("%d", &vecInt[i]);
        
    }

    printf("\n");

    for (int j = 5; j != 0; j--){
        printf("Valor da posição %d: %d\n", j, vecInt[j]);
        
    }
    
    return 0;
}