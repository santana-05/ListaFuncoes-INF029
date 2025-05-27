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