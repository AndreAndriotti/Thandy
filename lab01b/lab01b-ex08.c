#include <stdio.h>
#include <stdlib.h>
#define ROWS 2
#define COLUMNS 3

// Crie uma função capaz de criar a transposta de uma matriz.

void ReadMatrix (int MatrixA[ROWS][COLUMNS]){
    int i, j = 0;
    for (i = 0; i < ROWS; i++){
        for (j = 0; j < COLUMNS; j++){
            MatrixA[i][j] = rand() % 50;
        }
    }
}

void PrintMatrix (int MatrixA[ROWS][COLUMNS]){
    int i, j = 0;
    printf ("Original Matrix: \n");
    for (i = 0; i < ROWS; i++){
        for (j = 0; j < COLUMNS; j++){
            printf("%d\t", MatrixA[i][j]);
        }
        printf("\n");
    }

}

void TransposedMatrix(int MatrixA[ROWS][COLUMNS]){
    int MatrixB[COLUMNS][ROWS];
    int i, j = 0;
    for (i = 0; i < COLUMNS; i++){
        for (j = 0; j < ROWS; j++){
            MatrixB[i][j] = MatrixA[j][i];
        }
    }
    printf ("Transposed Matrix: \n");

    for (i = 0; i < COLUMNS; i++){
        for (j = 0; j < ROWS; j++){
            printf("%d\t", MatrixB[i][j]);
        }
        printf("\n");
    }
      

}

int main(){
    int matrixA[ROWS][COLUMNS];

    ReadMatrix(matrixA);
    PrintMatrix(matrixA);

    TransposedMatrix(matrixA);

    return 0;
    
}