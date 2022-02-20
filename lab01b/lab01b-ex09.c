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

void NegativesToModules(int matrix[MATRIX_ORDER][MATRIX_ORDER])
{
    for (int row = 0; row < MATRIX_ORDER; row++)
    {
        for (int col = 0; col < MATRIX_ORDER; col++)
        {
            if (matrix[row][col] < 0)
            {
                matrix[row][col] *= (-1);
            }
        }
    }
}

int main()
{
    int matrix[MATRIX_ORDER][MATRIX_ORDER];

    ReadMatrix(matrix);
    PrintMatrix(matrix);

    printf("\n>> Replacing negatives with its modules:\n");
    NegativesToModules(matrix);
    PrintMatrix(matrix);

    return 0;
}
