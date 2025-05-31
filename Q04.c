#include <stdio.h>
#define TAM 3

void lerNumeros(int numero[], int copia[], int num1, int num2, int num3 ){
    
    for(int i = 0; i < TAM; i++){
        copia[i] = numero[i];
    }

}

int main (){
    int copia[TAM];
    int numeros [TAM];

    for(int i = 0; i < TAM; i++){
        scanf("%d", &numeros[i]);
    }

    for(int j = 0; j < TAM; j++){
        printf("%d\n", copia[j]);
    }

    return 0;
}