#include <stdio.h>
#include <string.h>

// Moral da história

/*

    Passagem de ponteiros serve para você modificar o valor 
    da variável direto na memória usando funções durante o
    fluxo do programa.
    
*/


struct Pessoa {
    char nome[30];
    int age;
};

typedef struct {
    char human[30];
    unsigned int qtd;

} Sava; 


void changeAge(struct Pessoa *p, int new_age){
    p->age = new_age;
    
}

int main(){
    struct Pessoa person;

    Sava Salve;
    
    strcpy(person.nome, "Barão de Mauá");
    person.age = 30; 

    changeAge(&person, 23); 
    
    printf("Name person: %s\n", person.nome);
    printf("Age: %d\n", person.age);
    
    return 0;  
}