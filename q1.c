#include <stdio.h>
#include <stdlib.h>

int somaCubo(int n){

        if(n == 1){

        return 1;

            } else{

                return(n * n * n) + somaCubo(n -1);

            }

}

int main(){

    int n, resultado;
    
        printf("Insira um valor: ");
        scanf ("%d", & n);

    resultado = somaCubo(n);

        printf("O resultado dos primeiros %d cubos e: %d \t", n, resultado);

    return 0;
}