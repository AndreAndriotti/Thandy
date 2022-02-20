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

void FindLowestNumberRow(int matrix[MATRIX_ORDER][MATRIX_ORDER])
{
    int lowest_number = matrix[0][0];
    int lowest_number_row = 0;

    for (int row = 0; row < MATRIX_ORDER; row++)
    {
        for (int col = 0; col < MATRIX_ORDER; col++)
        {
            if (lowest_number > matrix[row][col])
            {
                lowest_number = matrix[row][col];
                lowest_number_row = row;
            }
        }
    }
    
    printf("\nLowest number: %i\n", lowest_number);
    printf("Row with the lowest number: %i\n", lowest_number_row);
}

int main()
{
    int matrix[MATRIX_ORDER][MATRIX_ORDER];

    ReadMatrix(matrix);
    PrintMatrix(matrix);
    FindLowestNumberRow(matrix);

    return 0;
}
