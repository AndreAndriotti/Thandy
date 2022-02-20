#include <stdio.h>
#include <string.h>

// Crie um progama capaz de ler dois nomes de pessoas e imprimi-los em ordem alfabética. Faça isto com string de C e de C++
int main(){
    char name1[30], name2[30];
    int i = 0;

    
    printf ("Type the first name: ");
    gets(name1);

    printf ("Type the second name: ");
    gets(name2);

    for (i = 0; i < 30; i++){
        if (name1[i] < name2[i]){
            printf (" The order is %s, %s.\n",name1, name2);
            break;
        }else{
            printf ("The order is %s, %s.\n", name2, name1);
            break;
        }
    }
    return 0;
}