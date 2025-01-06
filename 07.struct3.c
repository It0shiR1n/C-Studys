#include <stdio.h>
#include <string.h>


struct Person {
    char name[50];
    int age;

};

int main(){
    struct Person p1[2];

    strcpy(p1[0].name, "Jackson Parker");
    p1[0].age = 23;

    strcpy(p1[1].name, "Peter Parker");
    p1[1].age = 32;

    for(int i = 0; i < 2; i++){
        printf("%s\n", p1[i].name);
        printf("%d\n", p1[i].age);
        
    }
    
    return 0;
  
}