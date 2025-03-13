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

int prim_iguales(int tam, int a[]){
    int i;
    i = 0;
    int longitud;
    longitud = 1;

    do
    {
        if (a[i] == a[(i+1)]){
        }else{
            return longitud;
        }
        i = i + 1;
    } while (i != tam);

}


int main(){
    int t;
    printf("Cantidad de elementos que va a contener el array: ");
    scanf("%d" , &t);

    int a[t];

    pedir_arreglo(t , a);
    printf("Los primeros %d son iguales",prim_iguales(t,a));
}