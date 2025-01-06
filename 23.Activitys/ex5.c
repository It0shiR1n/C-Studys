#include <stdio.h>
#include <string.h>
 
int main(){
     char str1[30];
     char str2[30];

     printf("Digite uma string qualquer de até 30 caracteres: ");
     scanf("%29s", str1);

     printf("Digite outra string qualquer de até 30 caracteres: ");
     scanf("%29s", str2);

     printf("As strings concatenadas ficam: %s\n", strcat(str1, str2));
     
     return 0;
  
}