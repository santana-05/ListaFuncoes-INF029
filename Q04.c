/* Crie um programa que tenha uma função ler3Numeros. Essa função deve ler três números do
usuário e retornar os três números. A função main deve imprimir esses três números. Utilize vetor
para fazer o retorno. */

#include <stdio.h>
#define TAM 3

void lerNumeros(int numeros[], int copia[]){

    for(int i = 0; i < TAM; i++){
        copia[i] = numeros[i];
    }

}

int main (){
    int copia[TAM];
    int numeros[TAM];

    for(int i = 0; i < TAM; i++){
        scanf("%d", &numeros[i]);
    }
    
    printf("\n");
    
    lerNumeros(numeros, copia);

    for(int j = 0; j < TAM; j++){
        printf("Vetor copia posição %d: %d\n", j, copia[j]);
    }

    return 0;
}