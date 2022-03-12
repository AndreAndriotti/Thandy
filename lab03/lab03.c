#include <stdio.h>
#include <stdlib.h>

FILE* arq;

typedef struct
{
  char nome[50];
  int idade;
  float altura; 
    
} PESSOA;

FILE* abreArquivoAEntrada(char S1[50])
{
  arq = fopen(S1, "rt");
  return arq;
}

PESSOA leDadosUmaPessoa(FILE* Arq)
{
  PESSOA P;

  fscanf(Arq, "%s\n", &P.nome);
  fscanf(Arq, "%d\n", &P.idade);
  fscanf(Arq, "%f\n", &P.altura);

  return P;
}

void fechaArquivo(FILE* Arq)
{
  fclose(Arq);
}

void imprimeVetor(PESSOA Povo[10], int i)
{
  for (int c=0; c < i; c++)
  {
    printf("%s\n", Povo[c].nome);
    printf("%d\n", Povo[c].idade);
    printf("%.2f\n\n", Povo[c].altura);
  }
}

int Compare_Pessoas(const void *PessoaA, const void *PessoaB)
{
  float arg1 = ((PESSOA *)PessoaA)->altura;
  float arg2 = ((PESSOA *)PessoaB)->altura;
  
  if (arg1 < arg2) return -1;
  if (arg1 > arg2) return 1;
  return 0;
}

void ordenaVetor(PESSOA* Povo, int i)
{
  qsort(Povo, i, sizeof(PESSOA), Compare_Pessoas);
}

int main()
{
  char S1[50] = "S1.txt";
  char ch;
  int i = 0;
  
  PESSOA Povo[10], P;
  FILE* Arq = abreArquivoAEntrada(S1);

    
  if (abreArquivoAEntrada(S1) != NULL)
  {
    while(!feof(Arq)) 
    {
      P = leDadosUmaPessoa(Arq);
      Povo[i] = P;
      i++;
    }
    fechaArquivo(Arq);
    ordenaVetor(Povo, i);
    imprimeVetor(Povo, i);
    
  }
  else printf("Erro na abertura do arquivo");
  return 0;
}
