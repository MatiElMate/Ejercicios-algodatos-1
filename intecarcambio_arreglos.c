#include <stdio.h>


void intercambiar(int tam, int a[], int i, int j){
    int x;
    int y;
    int k;
    printf("%d , %d \n", i ,j);
    k = 0;


    printf("%d , %d \n", a[i], a[j]);

    x = a[i];
    y = a[j];
    

    a[i] = y;
    a[j] = x;
    
    do
    {
        printf("%d  ", a[k]);
        k = k + 1;   
    } while (tam != k);
    
}


int main(){
    int tam;
    int i;
    int j;
    int k;

    k = 0;

    printf("Cuantos elementos desea ingresar? ");
    scanf("%d", &tam);

    int a[tam];

    do
    {
        printf("Ingrese el elemento numero %d: ", k);
        scanf("%d", &a[k]);
        k = k + 1;

    } while (tam != k);

    printf("Ingrese las posiciones que desea intercambiar: ");
    printf("\n Posicion 1: ");
    scanf("%d", &i);
    printf("\n Pocision 2: ");
    scanf("%d", &j);

    if (i > tam || j > tam)
    {
        printf("Error, valores de intercambio incorrectos");
    }

    intercambiar(tam, a, i, j);
    
}