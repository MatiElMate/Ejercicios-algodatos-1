#include <stdio.h>

void imprimir_arreglo();

void pedir_arreglo(int n_max , int a[]){
    int k;
    k = 0;
    
    do
    {
        printf("Ingrese el valor en la posicion %d: " , k);
        scanf("%d", &a[k]);
        k = k + 1;
    } while (n_max != k);

    imprimir_arreglo(n_max , a);
    
}

void imprimir_arreglo(int n_max, int a[]){
    int k;
    k = 0;

    do
    {
        printf("%d ", a[k]);
        k = k + 1;
    } while (n_max != k);
    
}


int main(){
    int t;
    printf("Cantidad de elementos que va a contener el array: ");
    scanf("%d" , &t);

    int a[t];

    pedir_arreglo(t , a);
}