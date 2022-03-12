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
  }
  else printf("Erro na abertura do arquivo");
  return 0;
}