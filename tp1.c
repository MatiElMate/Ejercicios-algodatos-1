#include <stdio.h>
#include <stdbool.h>

int uno(int x, int y);
int dos(int x, int y, int z);
bool tres(int x, int y);
int cuatro(int x, int y);
bool cinco(int x, int y, int z);

int uno(x,y){
    return (x+y+1);
}

int dos(x,y,z){
    return (z*z+y*45-15*x);
}

bool tres(x,y){
    return (y-2 == (x*3+1)%5);
}

int cuatro(x,y){
    return  (y/2*x);
}

bool cinco(x,y,z){
    return  (y<x*z);
}

int main(){
    int opcion;
    int x;
    int y;
    int z;

    do{
        printf("\nMenu:\n");
        printf("1. Fila uno\n");
        printf("2. Fila dos\n");
        printf("3. Fila tres\n");
        printf("4. Fila cuatro\n");
        printf("5. Fila cinco\n");
        printf("6. Salir\n");
        printf("Elige una opción: ");
        scanf("%d", &opcion);

        if (opcion == 5 || opcion == 2){
            

            printf("Introduce la primer variable: ");
            scanf("%d", &x);

            printf("Introduce la segunda variable: ");
            scanf("%d", &y);

            printf("Introduce la tercera variable: ");
            scanf("%d", &z);
        }

        if (opcion==1 || opcion==3 || opcion==4){
            

            printf("Introduce la primer variable: ");
            scanf("%d", &x);

            printf("Introduce la segunda variable: ");
            scanf("%d", &y);
        }

        switch (opcion)
        {
        case 1:
            printf("El resultado es: %d\n", uno(x,y));
            break;

        case 2:
            printf("El resultado es: %d\n", dos(x,y,z));
            break;
        
        case 3:
            printf("El resultado es: %d\n", tres(x,y));
            break;

        case 4:
            printf("El resultado es: %d\n", cuatro(x,y));
            break;

        case 5:
            printf("El resultado es: %d\n", cinco(x,y,z));
            break;
        
        default:
            printf("Error");
            break;
        }
    }
    while(opcion != 6);
    return 0;
    }
