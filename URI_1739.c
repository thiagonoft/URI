/*

Um número pertence à sequência de Threebonacci caso pertença à sequência de Fibonacci (assuma que o primeiro termo da série é o 1) 
e atenda pelo menos um dos últimos critérios abaixo:

1 – A representação do número possui pelo menos um dígito 3.

2 – O número é múltiplo de 3.

Entrada
Cada caso de teste contém um inteiro N (1 ≤ N ≤ 60 ). A entrada termina com o fim de arquivo (EOF).

Saída
Para cada caso de teste imprima uma linha contendo o N-ésimo termo da série de Threebonacci.



*/

#include <stdio.h>

    int verificar(long long int N){
        // verifica se o numero possui algum digito 3 
        for(int i = 0; i < 20; i++){
            if((N%10) == 3){
                return 1;
            }
            N = N/10;
        }
        return 0;
    }
 
int main() {
    
    int N;
    while(scanf("%d", &N) != EOF){
        int count = 0;
        long long int a = 1;
        long long int b = 1;
        while(count < N){
            if(((a+b)%3)==0 || verificar(a+b))
                count += 1;
            if(count == N)
                printf("%lld\n", a+b);
            else{
                if(a<=b)
                    a = a+b;
                else
                    b = a+b;
            }
        }
        
    }
    return 0;
}
