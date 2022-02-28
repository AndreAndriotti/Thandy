#include <stdio.h>
#include <stdlib.h>
#define ROWS 2
#define COLUMNS 3


void ReadMatrix (int MatrixA[ROWS][COLUMNS]){
    int i, j = 0;
    for (i = 0; i < ROWS; i++){
        for (j = 0; j < COLUMNS; j++){
            MatrixA[i][j] = rand() % 40;
        }
    }
}

void PrintMatrix(int MatrixA[ROWS][COLUMNS]){
    int i, j = 0;
    for (int i = 0; i < ROWS; i++){
        for (int j = 0; j < COLUMNS; j++){
            printf("%d ", MatrixA[i][j]);
        }
        printf("\n");
    }
}

void MultiplicationRow(int MatrixA[ROWS][COLUMNS])
{
    int multiplier, j;
    int row_index;

    printf("\nEnter a multiplier: ");
    scanf("%i", &multiplier);

    printf("Select the ROW to be multiplied by %i: ", multiplier);
    scanf("%i", &row_index);
    printf("\n");

    for (int j = 0; j < COLUMNS; j++){
        MatrixA[row_index][j] *= multiplier;
    }
}

void MultiplicationColumn(int MatrixA[ROWS][COLUMNS])
{
    int multiplier, i;
    int column_index;

    printf("\nEnter a multiplier: ");
    scanf("%i", &multiplier);

    printf("Select the COLUMN to be multiplied by %i: ", multiplier);
    scanf("%i", &column_index);
    printf("\n");

    for (int i = 0; i < ROWS; i++){
        MatrixA[i][column_index] *= multiplier;
    }
}

int main()
{
    int MatrixA[ROWS][COLUMNS];

    ReadMatrix(MatrixA);
    PrintMatrix(MatrixA);

    MultiplicationRow(MatrixA);
    PrintMatrix(MatrixA);

    MultiplicationColumn(MatrixA);
    PrintMatrix(MatrixA);

    return 0;
}