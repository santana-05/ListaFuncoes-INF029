/* Crie um programa que tenha uma função soma e a função main. A função main deve ler dois
valores, enviar para a função soma. A função soma deve realizar a soma e retornar o valor. A
Função main deve imprimir o resultado da soma. */

#include <stdio.h>

int soma(int num1, int num2){
    
    return num1 + num2;    
}

int main() {
    int x, y;
    
    scanf("%d", &x);
    scanf("%d", &y);    
    
    printf("%d\n", soma(x,y));

    return 0;
}