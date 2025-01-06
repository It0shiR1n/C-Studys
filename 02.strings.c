#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
  
    char str[100];

    printf("Digite um texto qualquer: ");
    scanf("%s", str);

    printf("%s\n", str);
  
    return 0;
  
}