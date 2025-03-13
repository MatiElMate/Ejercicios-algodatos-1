#include <stdio.h>

int suma_hasta(int n){
    int i = 0;
    int x = 0;

    do
    {
        x = x + (n-i);
        i = i + 1;

    } while (i != n);

    return x;
    
}

int main(){
    int n;
    printf("Ingresa un numero: ");
    scanf("%d",&n);

    if (n < 0)
    {
        printf("Error, el numero ingresado no puede ser negativo");
    }else
    {
       printf("%d",suma_hasta(n));
    }
    
    
}

