#include <stdio.h>

struct comp_t{
    int menores;
    int iguales;
    int mayores;
};


struct comp_t cuantos(int tam, int a[], int elem){
    int k;
    k = 0;
    int min;
    int max;
    int igu;
    do{
        if (a[k] < elem){
            min++;
        }else if (a[k]>elem)
        {
            max++;
        }else{
            igu++;
        }
        k = k + 1;
    }while (k != tam);

    struct comp_t resultado = {min,igu,max};

    return resultado;
}

void pedir_arreglo(int tam, int a[]){
    int k;
    k = 0;

    do
    {
        printf("El elemento numero %d del arreglo será: ",k);
        scanf("%d",&a[k]);
        k = k + 1;
    } while (tam != k);
}


int main(){
    int t;
    printf("De cuantos elementos sera el arreglo? ");
    scanf("%d",&t);
    int a[t];
    pedir_arreglo(t,a);

    int e;

    printf("Que elemento desea comparar? ");
    scanf("%d", &e);

    cuantos(t,a,e);
    printf("Hay %d elementos menores a %d\n", cuantos(t,a,e).menores,e);
    printf("Hay %d elementos iguales a %d\n", cuantos(t,a,e).iguales,e);
    printf("Hay %d elementos mayores a %d\n \n", cuantos(t,a,e).mayores,e);

} 