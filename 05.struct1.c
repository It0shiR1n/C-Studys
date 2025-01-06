#include <stdio.h>
#include <string.h>

struct Pessoa {
    char nome[50];
    int idade;

};

int main(){
    /*
      Structs é uma estrutura de dados que permite organizar diferentes 
      tipos de dados em um único bloco
       
    */ 

    //struct Pessoa p1 = {"Junior Wade", 17};

    // OU
    
    struct Pessoa p1, p2;
   
    strcpy(p1.nome, "Junior Wade");
    p1.idade = 17;

    memcpy(&p2, &p1, sizeof(struct Pessoa));

    printf("Copiou a struct p1 para a struct p2\n");
    printf("%s\n", p2.nome);
    printf("%d\n", p2.idade);
    
    return 0;
}