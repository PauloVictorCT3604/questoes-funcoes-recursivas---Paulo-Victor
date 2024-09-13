#include <stdio.h>
#include <stdlib.h>

int somaElementos(int vetor[], int tamanho){

        if (tamanho == 0){

        return 0;

            } else{
        
            return vetor[tamanho - 1] + somaElementos(vetor, tamanho - 1);
        
            }
}

float mediaVetor(int vetor[], int tamanho){

        if(tamanho == 0){
            
        return 0;
        
            }
        
    int soma = somaElementos(vetor, tamanho);
    
    return (float)soma / tamanho;

}

int main() {
    int tamanho;

        printf("Insira o tamanho do vetor: ");
        scanf("%d", &tamanho);

    int vetor[tamanho];

        printf("Insira os valores do vetor:\n");
   
            for (int i = 0; i < tamanho; i++){

            scanf("%d", &vetor[i]);
            
            }

    float media = mediaVetor(vetor, tamanho);
    
        printf("A media dos valores do vetor e: %.1f\n", media);

    return 0;

}
