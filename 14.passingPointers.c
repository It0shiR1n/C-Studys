#include <stdio.h>

// Ponteiro 
// Endereço de memória
// Referência do valor do endereço de memória

// Por quê ponteiros tem tipos?
// 1.Espaço de alocação
// 2.Forma de interpretação
// 3.Aritmética de ponteiros (no contexto de avançar casas)
// 4.Segurança do tipo
// 5.Proteção contra acesso indevido


void swap(int *a, int *b) {
    int temp = *a;  // Salva o valor de a  
    *a = *b;        // Substitui o valor de A pelo valor de B 
    *b = temp;      // Substitui o valor de B pelo valor de A 
}

int main(){
    int x = 10; 
    int y = 20;

    swap(&x, &y);  // Passando o endereço de memória das variáveis
    
    printf("x value: %d\n", x);   // 20 
    printf("y value: %d\n", y);   // 10 

    return 0;
}