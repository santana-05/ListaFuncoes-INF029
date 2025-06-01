/* Crie um programa que tenha uma função subtrai e a função main. A função main deve ler três
valores, enviar para a função subtrai. A função subtrai deve realizar a subtração dos três valores
(primeiro menos o segundo menos o terceiro) e retornar o valor. A Função main deve imprimir o
resultado da subtração */

#include <stdio.h>

int subtrair(int num1, int num2, int num3){
    
    return  (num1 - num2) - num3;
}

int main() {
    int x, y, z;
    
    scanf("%d", &x);
    scanf("%d", &y);
    scanf("%d", &z);
    
    printf("%d", subtrair(x, y, z));

    return 0;
}
