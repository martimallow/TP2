#include "functions.h"

int GetColuna(FILE *entrada){
    int colunas;
    fscanf(entrada,"%d",&colunas);
    return colunas;
}

void GetLinha(FILE *entrada, int colunas, int* linhas){
  int i;
  for(i=0; i < colunas; i++){
    fscanf(entrada,"%d",&linhas[i]);    
  }
}

void SaveOut(FILE *saida, int colunas, int*linhas){
  int i;
  int result;
  for(i=0; i < colunas; i++){
    result = fprintf(saida,"%d ",linhas[i]);
  }
  if (result == EOF)
  printf("Erro na Gravacao\n");
}
