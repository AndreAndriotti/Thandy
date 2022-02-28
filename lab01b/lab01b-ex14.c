#include <stdio.h>
#include <stdlib.h>
#define SIZE 100
//Faça uma rotina que insira um caracter em uma string do tipo char Str[100], dada a posição do caracter.

    void ReadString(char str[SIZE]){
        printf("Enter the string: ");
        gets(str);

        printf("\nString: %s\n", str);
    }

    char ReadCharacter(){
        char character;
        printf ("Choice the character: ");
        character = getchar();
        return character;
    }

    int ReadPosition(){
        int position;
        printf ("Choice the position to insert: ");
        scanf ("%d", &position);

        return position-1;
    }

    void InsertCharacter(char str[SIZE], char character, int position){
        int i = 0;
        for (i = strlen(str) + 1; i >= 0; i--){
            str[i] = str[i-1];

            if (i == position){
                str[position] = character;
                break;
            }
        }
    }
    
    void PrintString(char str[SIZE]){
        printf("\n%s", str);
    }
    

int main(){
    char str[SIZE];
    ReadString(str);
    char character = ReadCharacter();
    char position = ReadPosition();

    InsertCharacter(str, character,position);
    PrintString(str);


    return 0;

}