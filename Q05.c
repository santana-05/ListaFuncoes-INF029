/*Crie um programa que tenha uma função ler4Numeros. Essa função deve ler quatro números do
usuário e retornar os quatro números. A função main deve imprimir esses quatro números. Utilize
struct para fazer o retorno. */

#include <stdio.h>
#define TAM 4

typedef struct {
    int numero;
} lista;

void ler4Numeros(lista inteiros[]){    
    int x;
    for(int i = 0; i < TAM; i++){
        scanf("%d", &x);    
        inteiros[i].numero = x;
    }
}

int main (){
    lista inteiros[TAM];    

    ler4Numeros(inteiros);

    printf("\n");

    for(int j = 0; j < TAM; j++){
        printf("%d\n", inteiros[j].numero);
        
    }
        
    return 0;
}