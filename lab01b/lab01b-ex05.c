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

void MultiplyRow(int matrix[MATRIX_ORDER][MATRIX_ORDER])
{
    int multiplier;
    int row_index;

    printf("\nEnter a multiplier: ");
    scanf("%i", &multiplier);

    printf("Select the ROW to be multiplied by %i: ", multiplier);
    scanf("%i", &row_index);
    printf("\n");

    for (int col = 0; col < MATRIX_ORDER; col++)
    {
        matrix[row_index][col] *= multiplier;
    }
}

void MultiplyColumn(int matrix[MATRIX_ORDER][MATRIX_ORDER])
{
    int multiplier;
    int col_index;

    printf("\nEnter a multiplier: ");
    scanf("%i", &multiplier);

    printf("Select the COLUMN to be multiplied by %i: ", multiplier);
    scanf("%i", &col_index);
    printf("\n");

    for (int row = 0; row < MATRIX_ORDER; row++)
    {
        matrix[row][col_index] *= multiplier;
    }
}

int main()
{
    int matrix[MATRIX_ORDER][MATRIX_ORDER];

    ReadMatrix(matrix);
    PrintMatrix(matrix);

    MultiplyRow(matrix);
    PrintMatrix(matrix);

    MultiplyColumn(matrix);
    PrintMatrix(matrix);

    return 0;
}
