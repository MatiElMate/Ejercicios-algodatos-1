#include <stdio.h>
int main(){
    int x;
    int y;
    printf("Punto A \n Ingresa x: ");
    scanf("%d",&x);
    x=5;
    printf("%d\n Punto B",x);

    printf("\nIngresa x: ");
    scanf("%d",&x);

    printf("Ingresa y: ");
    scanf("%d",&y);

    x = x+y;
    y= y+y;
    printf("%d %d\n Punto C", x,y);


    printf("\nIngresa x: ");
    scanf("%d",&x);

    printf("Ingresa y: ");
    scanf("%d",&y);

    y = y+y;
    x = x+y;

    printf("%d %d \n" , x,y);
}