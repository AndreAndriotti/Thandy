#include <stdio.h>
#include <stdlib.h>
#define SIZE 30
//Faça uma função que retorne a posição de um dado caracter dentro de uma string.


void ReadString(char str[SIZE]){
    printf("Enter the string: ");
    gets(str);

}
 
void PrintString(char str[SIZE]){
    printf("\nString: %s\n", str);
}

char ReadCharacter(){
    char character;
    printf ("Choice the character: ");
    character = getchar();

    return character;
}

void FoundCharacter (char str[SIZE], char character){
    int i, aux = 0;
    for (i = 0; i < strlen(str); i++){
        if (str[i] == character){
            printf ("%c is the position %d\n", character, i+1);
            aux = 1;
            break;
        }
    }

    if (aux == 0) printf ("%c is not in string...", character);
   
}

int main(){
    char str[SIZE];
    
    ReadString(str);
    PrintString(str);
    char character = ReadCharacter();
    FoundCharacter(str, character);


    return 0;
}