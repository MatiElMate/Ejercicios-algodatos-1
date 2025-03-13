#include <stdio.h>
#include <limits.h>

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

int main(){
    int t;
    printf("Cantidad de elementos que va a contener el array: ");
    scanf("%d" , &t);

    int a[t];

    pedir_arreglo(t , a);

    printf("El numero impar mas chico es %d \n",minimo_impares(t,a));
    printf("\nEl numero par mas chico es: %d \n",minimo_pares(t,a));
    
    if (minimo_impares(t,a) < minimo_pares(t,a))
    {
        printf("El numero mas chico del array es %d\n",minimo_impares(t,a));
    }else
    {
        printf("El numero mas chico del array es: %d\n",minimo_pares(t,a));
    }
}