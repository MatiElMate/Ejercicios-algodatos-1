#include <stdio.h>
#include <limits.h>
#include <stdbool.h>

void pedir_arreglo(int n_max , int a[]){
    int k;
    k = 0;

    do
    {
        printf("Ingrese el valor en la posicion %d: " , k);
        scanf("%d", &a[k]);
        k = k + 1;
    } while (n_max != k);

}

int minimo_pares(int tam, int a[]){
    int k;
    k = 0;
    int min;
    min = INT_MAX;

    do
    {
        if (a[k] % 2 == 0)
        {
            if (a[k] < min){
                min = a[k];
            }
        }
        
        k = k + 1;
    } while (k != tam);
    return min;
}

int minimo_impares(int tam, int a[]){
    int k;
    k = 0;
    int min;
    min = INT_MAX;

    do
    {
        if (a[k] % 2 != 0)
        {
            if (a[k] < min){
                min = a[k];
            }
        }
        
        k = k + 1;
    } while (k != tam);
    return min;
}

bool todos_pares(int tam, int a[]){
    int k;
    int b;
    k = 0;
    b = 0;


    do
    {
        if (a[k] % 2 != 0)
        {
            b = b + 1;
        }

        k = k + 1;
        
    } while (k != tam);
    if (b == tam){
        printf("El numero impar mas chicho es %d \n",minimo_impares(tam, a));
        printf("No existen numeros pares en el array ingresado");
    }else{
        if (b < tam && b != 0)
        {
            printf("El numero impar mas chicho es %d \n",minimo_impares(tam, a));
            printf("El numero par mas chicho es %d \n",minimo_pares(tam, a));
        }else{
            printf("El numero par mas chicho es %d \n",minimo_pares(tam,a));
            printf("No existen numeros impares en el array ingresado");

        }
    }
}



int main(){
    int t;
    printf("Cantidad de elementos que va a contener el array: ");
    scanf("%d" , &t);

    int a[t];

    pedir_arreglo(t , a);

    todos_pares(t,a);
}