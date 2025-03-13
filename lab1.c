#include <stdio.h>
#include <assert.h>

int main(){
    int x;
    int y;
    int z;

    printf("Ingresa x: ");
    scanf("%d", &x);

    printf("Ingresa y: ");
    scanf("%d", &y);

    printf("Ingresa z: ");
    scanf("%d", &z);

    z = x; 
    x = y;  
    y = z;

    printf("%d , %d , %d ", x,y,z);
}