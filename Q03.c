/* Faça um programa que tenha uma função que recebe um número inteiro e retorna o fatorial
deste número. Esta função deve ainda verificar se é possível calcular o fatorial, se não for, ela deve
de alguma forma retornar para a main que deu algum erro. A função main deve solicitar o valor do
usuário e imprimir o fatorial dele, ou se não é possível calcular o fatorial. */

#include <stdio.h>
#define NUMERO -1

int fatorial(int num){
    int resultado = num;
    
    if (num < 0){
       return 0;
    }else if (num == 0){
        return 1;
    }else{ 
        for(int i = num - 1; i > 0; i--){
            resultado *= i;
        }
        return resultado;
    }
    
}

int main() {
    int resultado;
    
    resultado = fatorial(NUMERO);
    
    if(resultado == 0){
        printf("Não é possível calcular o fatorial\n");
    }else{
        printf("Fatorial: %d\n", resultado);
    }
    
    return 0;
}