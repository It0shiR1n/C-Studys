#include <stdio.h>
#include <string.h> 

int main() {
    // Falando de C

    // Byte  | - São iguais em quesito de tamanho 
    // Char  |

    // Int   | - Depente da arquitetura do processador

// ------------------------------------------------------------
    
    // Falando de outras Linguagens

    // Byte  | - É um byte normal
    // Char  | - UTF-16

    
    char name[30];
    char invertedName[30];
    int j = 0;

    printf("Digite seu nome: ");
    scanf("%29s", name); 

    
    for (int i = 29; i >= 0; i--) {
        invertedName[j] = name[i];
        j++;
    }

    invertedName[j] = '\0';  // this is a null byte which represents a end of the string    "Hello World" = 10 Bytes + '\0' = 1 Byte = 11 Bytes

    printf("Nome original: %s\n", name);
    printf("Nome invertido: %s\n", invertedName);

    return 0;
    
}