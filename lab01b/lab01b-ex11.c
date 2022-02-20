#include <stdio.h>

#define MATRIX_ORDER 3

void ReadMatrix(int matrix[MATRIX_ORDER][MATRIX_ORDER])
{
    printf("Fill the square matrix (ORDER=3): \n\n");

    for (int row = 0; row < MATRIX_ORDER; row++)
        {
            for (int col = 0; col < MATRIX_ORDER; col++)
            {
                printf("[%i,%i] = ", row, col);
                scanf("%i", &matrix[row][col]);
            }
            printf("\n");
        }
}

void PrintMatrix(int matrix[MATRIX_ORDER][MATRIX_ORDER])
{
    for (int row = 0; row < MATRIX_ORDER; row++)
    {
        for (int col = 0; col < MATRIX_ORDER; col++)
        {
            printf("%d ", matrix[row][col]);
        }
        printf("\n");
    }
}

void SumTwoRows(int matrix[MATRIX_ORDER][MATRIX_ORDER])
{
    int result_row_index = 1;
    
    for (int col = 0; col < MATRIX_ORDER; col++)
    {
        matrix[result_row_index][col] = matrix[0][col] + matrix[1][col];
    }
}

void MultiplyTwoRows(int matrix[MATRIX_ORDER][MATRIX_ORDER])
{
    int result_row_index = 1;
    
    for (int col = 0; col < MATRIX_ORDER; col++)
    {
        matrix[result_row_index][col] = matrix[0][col] * matrix[1][col];
    }
}

int main()
{
    int matrix[MATRIX_ORDER][MATRIX_ORDER];

    ReadMatrix(matrix);
    PrintMatrix(matrix);

    printf("\n>>> L2 = L1 + L2\n\n");
    SumTwoRows(matrix);
    PrintMatrix(matrix);

    printf("\n>>> L2 = L1 * L2\n\n");
    MultiplyTwoRows(matrix);
    PrintMatrix(matrix);

    return 0;
}
