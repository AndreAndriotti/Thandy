#include <stdio.h>

int ReadMaxNumber()
{
    int max_number = 0;

    while (max_number % 2 == 0)
    {
        printf("Enter an odd max number: ");
        scanf("%i", &max_number);

        if (max_number % 2 == 0)
        {
            printf("Sorry, %i is not an odd number. Try again!\n", max_number);
        }
    }

    return max_number;
}

void PrintSequences(int max_number)
{
    int current_number;
    int spaces_count = 0;
    int min_number = 0;
    max_number++;

    while (min_number != max_number)
    {
        min_number++;
        max_number--;
        current_number = min_number;

        for (int i=0; i < spaces_count; i++)
            printf("  ");

        for (current_number; current_number <= max_number; current_number++)
        {
            printf("%i ", current_number);
        }
        printf("\n");

        spaces_count++;
    }
}

int main()
{
    int max_number = ReadMaxNumber();
    PrintSequences(max_number);

    return 0;
}
