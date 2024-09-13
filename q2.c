#include <stdio.h>
#include <stdlib.h>

int somatorio(int n){

        if(n == 1){

            return 1;

            } else{

                return n + somatorio(n -1);

            }

}

int main(){

    int n, resultado;

        printf("Digite um numero inteiro n: ");
        scanf("%d", &n);
    
    resultado = somatorio(n);
    
        printf("O somatorio dos numeros de 1 a %d e: %d\n", n, resultado);

    return 0;
}