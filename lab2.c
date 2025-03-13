#include <stdio.h>

int main(){
    int x;
    int y;
    int z;

    printf("Ingresa x: ");
    scanf("%d", &x);

    printf("Ingresa y: ");
    scanf("%d", &y);

    x = x + 1;
    y = x + y;

    printf("%d , %d", x,y);



    printf("_________________________");

    printf("Ingresa x: ");
    scanf("%d", &x);

    printf("Ingresa y: ");
    scanf("%d", &y);
    
    printf("Ingresa z: ");
    scanf("%d", &z);

    x = y;
    y = y + x + z;
    z = y + x;

    printf("%d , %d , %d", x,y,z);
}