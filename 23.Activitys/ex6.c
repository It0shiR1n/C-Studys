#include <stdio.h>

int main(){
    char text[30];
    char letter[1];
    int count = 0;
    
    printf("Por favor digite uma palavra de até 30 caracteres: ");
    scanf("%29s", text);

    printf("Por favor digite uma letra que tenha na palavra que digitou: ");
    scanf("%s", letter);

    for (int i = 0; i < 30; i++){
        if (text[i] == letter[0]) {
            count++;
            
        }
        
    }

    printf("A letra que você digitou aparece %d na palavra\n", count);
        
}