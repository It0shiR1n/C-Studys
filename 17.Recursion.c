#include <stdio.h>

// Recursividade: é uma função que chama a si mesma dado um limite quantificado (Performa melhor em contextos leves)
// Iteração: (Performa melhor em contextos exigentes)


int resFunc(int n){
    if (n == 0){
        return n;
        
    }else {
        return n * resFunc(n - 1);
        
    }
}


int main(){



    return 0;
}