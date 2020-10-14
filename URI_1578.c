#include <stdio.h>
#include <math.h>






int main(void)
{
    unsigned short N, casos=4, x, i, j, k, c, digitos;
    long double maior;
    scanf("%hu", &N);
    for(x=0; x < N; x++){
        
        scanf("%hu", &c);
        long double m[c][c];
        
        //preenche a matriz e eleva o termo ao quadrado
        for(i=0; i<c; i++){
            for(j=0; j<c; j++){
                scanf("%Lf", &m[i][j]);
                m[i][j] *= m[i][j];
            }
        }
        
        
        printf("Quadrado da matriz #%hu:\n", casos);
        for(i=0; i<c; i++){
            for(j=0; j<c; j++){
                
                // acha o maior numero da coluna
                maior=0;
                for(k=0; k < c; k++){
                    if (m[k][j] > maior)
    					maior = m[k][j];
                }
                digitos = ((floor(log10(maior))) + 1);
                
                if (j != c && j != 0)
    				printf(" ");
    				
	    			printf("%*.Lf", digitos, m[i][j]);
            }
            printf("\n");
        }
        casos++;
        if(x != N-1)
            printf("\n");
    }


}