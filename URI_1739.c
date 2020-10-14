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