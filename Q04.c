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

    lerNumeros(numeros[TAM], copia[TAM]);

    for(int j = 0; j < TAM; j++){
        printf("%d\n", copia[j]);
    }

    return 0;
}