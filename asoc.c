#include <stdio.h>
#include <stdbool.h>

typedef char clave_t;
typedef int valor_t;

struct asoc
{
    clave_t clave;
    valor_t valor;
};

bool asoc_existe(int tam, struct asoc a[], clave_t c){
    int k;
    k = 0;
    int contador;
    contador = 0;
    do
    {
        if (a[k].clave == c)
        {
            contador++;
            printf("La clave %c tiene un valor de %d en la posicion %d \n", c,a[k].valor,k);
        } 
        k++;
    } while (k != tam);
    
    if (contador == 0)
        {
            printf("No existe ningun vlaor asociado a la clave ingresada");
        }else{
            printf("Existen %d valores asociados a la clave %c", contador,c);
        }

}

void pedir_arreglo(int tam, struct asoc a[]) {
    int k;
    k = 0;
    clave_t cla;
    valor_t val;

    do {
        printf("Ingresa la clave del elemento: ");
        scanf(" %c", &cla); // Agrega un espacio antes de %c

        printf("Ingresa el valor del elemento: ");
        scanf("%d", &val);
        getchar(); // Limpia el búfer

        a[k] = (struct asoc){cla, val};

        k = k + 1;
    } while (tam != k);
}





int main(){
    int t;
    printf("De cuantos elementos sera el arreglo? ");
    scanf("%d",&t);
    struct asoc a[t];
    pedir_arreglo(t,a);

    clave_t c; 
    printf("Que clave desea buscar? ");
    scanf("%c", &c);
    asoc_existe(t,a,c);
}
