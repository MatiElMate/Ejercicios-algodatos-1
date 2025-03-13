#include <stdio.h>
#include <stdbool.h>

int main(){
    int x;
    int y;
    int z;
    bool b;
    bool w;
    do{
    printf("Ingresar numero multiplo de 4: ");
    scanf("%d", &x);
    if (x%4 == 0){
        y = -x;
        z = 2 * x;
        b = true;
        w = b;

        printf("Primera fila: %d\n" , (x%4 == 0));
        printf("Segunda fila: %d\n", (x+y == 0 && y-x == (-1) * z));
        printf("Tercera fila: %d\n", (!(b) && w));
        x=0;

    }else{
        printf("Dale pelotudito, no te sabes la tabla del 4, pete");
    }
    }while(x!=0);
    return 0;
}