/*

Os habitantes de Nlogônia são muito supersticiosos. Uma de suas crenças é que os números das casas de rua que têm um dígito repetido traz sorte ruim para os moradores. 
Portanto, eles nunca iriam viver em uma casa que tem o número 838 ou 1004, por exemplo.

A rainha de Nlogônia ordenou a construção de uma nova avenida à beira-mar e quer atribuir para as novas casas apenas números sem dígitos repetidos, 
para evitar desconforto entre os seus súditos. 
Você foi nomeado por Sua Majestade para escrever um programa que, dado dois inteiros N e M, determine a quantidade máxima possível de casas que podem assumir um número 
entre N e M inclusive, sem que ocorram dígitos repetidos nestes números.

*/

#include <stdio.h>

    int ultimodigito(int N){
        // verifica se o ultimo digito de um numero é igual a algum dos outros e se for, retorna 1, caso contrario chama a função novamente de forma recursiva até percorrer todos os numeros e retorna 0 caso todos os digitos sejam diferentes
        int resposta = 0;
        int ultimo = N%10;
        int numero = N;
        if(N>=10 && N<100){
            int penultimo = N/10;
            if(ultimo == penultimo){
                resposta = 1;
            }
        }
        else if(N>=100 && N<1000){
            for(int i=0; i<2; i++){
                numero = numero/10;
                if(ultimo == (numero%10)){
                    resposta = 1;
                    break;
                }
            }
            if(resposta == 0)
                return ultimodigito(N/10);
        }
        else if(N>=1000 && N<=5000){
            for(int i=0; i<3; i++){
                numero = numero/10;
                if(ultimo == (numero%10)){
                    resposta = 1;
                    break;
                }
            }
            if(resposta == 0)
                return ultimodigito(N/10);
        }
        return resposta;
    }

int main() {
 

    int N, M;
    while (scanf("%d %d",&N,&M) != EOF){
        int count = 0;
        for(N; N <= M; N++){
            if(ultimodigito(N) == 0){
                count++;
            }
        }
        printf("%d\n", count);
    }
    return 0;
}
