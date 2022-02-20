#include <stdio.h>
#include <string.h>

#define STR_SIZE 100

void RemoveCharByIndex(char string[STR_SIZE], int index)
{
    for (index; index < STR_SIZE; index++)
    {
        string[index] = string[index+1];
    }
}

int main()
{
    char Str[STR_SIZE];
    int char_index;

    printf(">>> Enter a string (max 100 characters): ");
    fgets(Str, STR_SIZE, stdin);


    printf(">>> Enter the character position you want to remove: ");
    scanf("%i", &char_index);

    RemoveCharByIndex(Str, char_index);
    printf("%s", Str);

    return 0;
}
