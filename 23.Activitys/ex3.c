#include <stdio.h>

int main(){
    float vecFloat[4];
    float laggestNumber = 0;
    float smallestNumber = 0;
    
    for (int i = 0; i <= 4; i++){
        printf("Digite um número de ponto flutuante para a posição %d: ", i+1);
        scanf("%f", &vecFloat[i]);
        
    }

    for (int j = 0; j <= 4; j++) {
        if (vecFloat[j] > laggestNumber) {
            laggestNumber = vecFloat[j];
            
        }else {
            continue;
            
        }
        
    }

    for (int l = 0; l <= 4; l++) {
        if (l == 0) {
            smallestNumber = vecFloat[l];
            
        }else {
            if (vecFloat[l] < smallestNumber) {
                smallestNumber = vecFloat[l];
                
            }else {
                continue;
                
            }   
        }
    }


    printf("Maior número é: %0.2f\n", laggestNumber);
    printf("Menor número é: %0.2f\n", smallestNumber);
    
    return 0;
  
}