#include <stdio.h>
int main(){
    int x;
    int y;

    printf("Ingrese x: ");
    scanf("%d", &x);

    printf("Ingrese y: ");
    scanf("%d", &y);

    y = y+y;
    x = x+y;

    printf("%d %d\n " , x,y);
    return 0;
}