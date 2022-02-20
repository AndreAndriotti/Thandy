#include <stdio.h>

//Crie um programa capaz de criar a transposta de uma matriz. A matriz deve ser lida de teclado.
int main(){

    int rows, columns;
    printf("Enter the number of rows in the matrix: ");
    scanf("%d", &rows);

    printf("Enter the number of columns in the matrix: ");
    scanf("%d", &columns);

    int matrixA[rows][columns];
    int matrixB[columns][rows];
    int i, j = 0;

    //Clear matrix
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < columns; j++)
        {
            matrixA[i][j] = 0;
        }
    }

    for (i = 0; i < columns; i++)
    {
        for (j = 0; j < rows; j++)
        {
            matrixB[i][j] = 0;
        }
    }

    //Enter the elements matrix A, rows = i, columns = j
    for (i = 0; i < rows; i++){
        for (j = 0; j < columns; j++){
            printf("Insert the element [%d][%d] of matrix A\n", i, j);
            scanf("%d", &matrixA[i][j]);
        }
    }
    

    //Print matrix A
    printf("\nOriginal Matrix: \n");
    for (i = 0; i < rows; i++){
        for (j = 0; j < columns; j++){
            printf("%d\t", matrixA[i][j]);
        }
        printf("\n");
    }

    //Transposed Matrix
    for (i = 0; i < columns; i++){
        for (j = 0; j < rows; j++){
            matrixB[i][j] = matrixA[j][i];
        }
    }
    printf ("\nTransposed Matrix: \n");

    for (i = 0; i < columns; i++){
        for (j = 0; j < rows; j++){
            printf("%d\t", matrixB[i][j]);
        }
        printf("\n");
    }
    return 0;
}