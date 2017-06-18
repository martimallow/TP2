#include <stdio.h>
#include "insercao.c"
#include "functions.c"

int main(int argc, char const *argv[]) {
  int colunas;
  FILE *entrada;
  FILE *saida;

  entrada = fopen("entrada.txt", "r+");
  saida = fopen("saida.txt", "w+");

  colunas = GetColuna(entrada);

  int linhas[colunas];
  GetLinha(entrada,colunas,linhas);

  Insercao(linhas,colunas);

  SaveOut(saida,colunas,linhas);

fclose(entrada);
fclose(saida);
}
