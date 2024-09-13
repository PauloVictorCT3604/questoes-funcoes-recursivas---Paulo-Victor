#include <stdio.h>
#include <stdlib.h>

void zeroAnum(int n){

        if(n >= 0){

        zeroAnum(n - 1);

            printf(" %d ", n);

        }
}

int main(){

    int n;

        printf("Insira um numero inteiro: ");
        scanf ("%d", & n);

    zeroAnum(n);

        printf("\t");

    return 0;

}