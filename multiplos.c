#include <stdio.h>
#include <stdbool.h>

bool todos_pares(int tam, int a[]){
    int k;
    k = 0;

    do
    {
        if (a[k] % 2 != 0)
        {
            printf("El elemento %d no es un numero par\n" , a[k]);
            return 0;
        }

        k = k + 1;
        
    } while (k != tam);
    
    printf("Todos los numeros del arreglo son pares\n");
    return 1;

}

bool existe_multiplo(int m, int tam, int a[]){
    int k;
    k = 0;

    do
    {
        if (a[k]%m == 0)
        {
            printf("El elemento %d es multiplo de %d \n", a[k],m);
        }

        k = k + 1;
    } while (k != tam);
    
}


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


int main()
{
    int e;
    int t;
    printf("Cantidad de elementos que va a contener el array: ");
    scanf("%d" , &t);

    int a[t];

    pedir_arreglo(t , a);
     
    do
    {
        printf("Que funcion desea ejecutar?\n");    
        printf("1) todos pares \n");
        printf("2) existe multiplo \n");
        printf("0) salir \n");
        scanf("%d", &e);

        if (e == 1) {
            todos_pares(t,a);
        }
        if (e == 2)
        {
            int m;
            printf("De que numero buscar multiplo: ");
            scanf("%d", &m);
            existe_multiplo(m,t,a);
        }else
        {
            if (e != 0){
                printf("0, 1 o 2 papito, no es tan dificil...");
            }
        }
        
        
    } while (e != 0);
    
    return 0;
}
