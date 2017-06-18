void Insercao(int *vetor, int n){
  int j,x,i;
  for (j=1; j<=n; j++){
    x = vetor[j];
    i = j-1;
    while( (i>=0) && (vetor[i]>x) ){
      vetor[i+1] = vetor[i];
      i--;
    }
    vetor[i+1] = x;
  }
}
