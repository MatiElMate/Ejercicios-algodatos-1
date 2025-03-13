#include <stdio.h>

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

int sumatoria(int tam, int a[]){
    int k;
    k = 0;
    int sum;
    sum = 0;

    do
    {
        sum = sum + a[k];
        k = k + 1;    
    } while (tam != k);
    
    return sum;
}

int main(){
    int t;
    printf("Cantidad de elementos que va a contener el array: ");
    scanf("%d" , &t);

    int a[t];

    pedir_arreglo(t , a);
    printf("%d" ,sumatoria(t, a));
}