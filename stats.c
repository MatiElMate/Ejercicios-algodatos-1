#include <stdio.h>
#include <limits.h>

struct datos_t{
    float maximo;
    float minimo;
    float promedio;
};

struct datos_t stats(int tam, float a[]){
    int k;
    float min;
    float max;
    float prom;

    k = 0;
    min = a[0];
    max = a[0];

    do{
        if (a[k] < min)
        {
            min = a[k];
        }else if (a[k] > max)
        {
            max = a[k];
        }
        k = k +1;
    } while (k != tam);
    
    prom = min / max;
    struct datos_t resultado = {max,min,prom};

    return resultado;
}



void pedir_arreglo(int tam, float a[]){
    int k;
    k = 0;

    do{
        printf("El elemento numero %d del arreglo será: ",k);
        scanf("%f",&a[k]);
        k = k + 1;
    } while (tam != k);
}


int main()
{
    int t;
    printf("De cuantos elementos sera el arreglo? ");
    scanf("%d",&t);
    float a[t];
    pedir_arreglo(t,a);

    printf("\nEl minimo del array es: %f \n",stats(t,a).minimo);
    printf("\nEl maximo del array es: %f \n",stats(t,a).maximo);
    printf("\nEl promedio del maximo y minimo del array es: %f \n\n",stats(t,a).promedio);

    return 0;
}
