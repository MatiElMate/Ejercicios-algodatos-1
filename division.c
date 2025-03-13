#include <stdio.h>
#include <assert.h>

struct div_t{
    int cociente;
    int resto;
};

struct div_t division(int x, int y){
    struct div_t resultado;
    resultado.cociente = x / y;
    resultado.resto = x % y;
    return resultado;
}   




int main(){
    int x; 
    int y;

    printf("Ingrese el dividendo: ");
    scanf("%d" , &x);
    
    printf("Ingrese el divisor: ");
    scanf("%d" , &y);

    if (y <= 0 || x < 0) {
        printf("Error: El divisor debe ser positivo y ambos números deben ser no negativos.\n");
        return 1;
    }

    struct div_t resultado = division(x,y);
    
    printf("Cociente: %d\n", resultado.cociente);
    printf("Resto: %d\n", resultado.resto);
}