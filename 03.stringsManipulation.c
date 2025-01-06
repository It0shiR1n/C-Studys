#include <stdio.h>   
#include <string.h>    // Manipulação de strings
#include <stdlib.h>    // Conversões e alocações  

int main(){
    int resultado = strcmp("abc", "ABC"); // Compara com a tabela ASCII, os minuculos são maiores que os maiusculos

    if(resultado == 0){
        printf("As strings são iguais\n");
      
    }else if(resultado < 0){
        printf("As 'abc' é menor que 'ABC'\n");
      
    }else if (resultado > 0 ){    // <- cai aqui
        printf("a string 'abc' é maior que 'ABC'\n");
      
    }

    int res1 = strcat("salve ", "salve");
    int res2 = strcpy("Não curto desenvolvimento", " Curto desenvolvimento");
    int res3 = strchr("Não", 'N');     // Encontra a ocorrência do começo para o fim
    int res4 = strrchr("Sim", 'm');    // Encontra a ocorrência do fim para o começo

    atoi("Pentest");
    atof("Pentest");
  
  
    return 0;
}