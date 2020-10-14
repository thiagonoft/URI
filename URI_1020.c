// Leia um valor inteiro correspondente à idade de uma pessoa em dias e informe-a em anos, meses e dias

#include <stdio.h>
 
int main() {
    int qtdias;
    puts("Digite a quantidade de dias: ");
    scanf("%d", &qtdias);
    
    int anos = qtdias/365;
    int meses = (qtdias%365)/30;
    int dias = (qtdias%365)%30;
    
    printf("%d ano(s) \n%d mes(es) \n%d dia(s)", anos, meses, dias);

    return 0;
}
