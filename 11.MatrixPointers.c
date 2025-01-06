#include <stdio.h>
#include <stdlib.h>

int main(){
    int matrix[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int *p_matrix = &matrix[0][0];

    for (int i = 0; i <= 3; i++){
        for (int j = 0; j <= 3; j++){
            printf("%d", *p_matrix); 
            p_matrix++;
            
        } 
        printf("\n");
    }
    

    return 0;
}