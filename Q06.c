/*Crie um programa que tenha uma função ler3Letras. Essa função deve ler três letras do usuário
e retornar as três letras. A função main deve imprimir essas três letras.*/

#include <stdio.h>
#define TAM 3

void ler3Letras(char letras[]){
    char x;

    for(int i = 0; i < TAM; i++){
        scanf("%c", &x);
        getchar();
        letras[i] = x;
    }
}

int main (){
    char letras[TAM];
    
    ler3Letras(letras);

    for(int j = 0; j < TAM; j++){
        printf("Letra %d: %c\n", j+1, letras[j]);
    }

    return 0;
}