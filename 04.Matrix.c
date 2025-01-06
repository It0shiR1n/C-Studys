#include <stdio.h>
#include <stdlib.h>

int main() {
    // int matrix[linha][coluna]
  
    int matrixA[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int matrixB[3][3] = {{11, 12, 13}, {14, 15, 16}, {17, 18, 19}};  

    int matrixC[3][3];

    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            matrixC[i][j] = matrixA[i][j] + matrixB[i][j];
          
        }
      
    }

    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            printf("%d ", matrixC[i][j]);
          
        }
    }
  
    return 0;
}