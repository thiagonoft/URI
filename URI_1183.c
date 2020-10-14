/*  

Leia um caractere maiúsculo, que indica uma operação que deve ser realizada e uma matriz M[12][12]. 
Em seguida, calcule e mostre a soma ou a média considerando somente aqueles elementos que estão acima da diagonal principal da matriz.

*/

#include <stdio.h>

int main(void) {
  char O;
  scanf("%c", &O);
  long double m[12][12], soma=0.0;
  int i,j,k,l,x=1;
    
  // preenche a matriz com os numeros dados no input
  for(i=0; i < 12; i++){
      for(j=0; j < 12; j++){
          scanf("%Lf", &m[i][j]);
      }
  }

  for(k=0; k < 11; k++){
    while(k+x < 12){
      soma += m[k][k+x];
      x++;
    }
    x=1;
  }

  if(O=='S')
    printf("%.1Lf\n", soma);
  else{
    soma = soma/66;
    printf("%.1Lf\n", soma);
    }
}
