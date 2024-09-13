#include <stdio.h>
#include <stdlib.h>

void zeroAnumDecres(int n){

        if(n >= 0){

            printf(" %d ", n);

        zeroAnumDecres(n - 1);

        }
}

int main(){

    int n;

        printf("Insira um numero inteiro: ");
        scanf ("%d", & n);

    zeroAnumDecres(n);

        printf("\t");

    return 0;

}