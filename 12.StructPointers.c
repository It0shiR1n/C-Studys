#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Pessoa{
    char nome[50];
    int idade;
    float altura;
};


int main(){
    struct Pessoa person;

    strcpy(person.nome, "Parker Wright");
    person.idade = 25;
    person.altura = 1.78;

    struct Pessoa *p_person = &person;

    printf("Nome: %s\n", p_person->nome); 
    printf("Idade: %d\n", p_person->idade);        
    printf("Altura: %.2f\n", p_person->altura);
    
    return 0;
}