#include <stdio.h>

int main(){
    int x;
    int y;

    printf("Ingresa un valor de x: ");
    scanf("%d",&x);
    
    printf("Ingresa un valor de y: ");
    scanf("%d",&y);
    
    if (x>=y){
        x = 0;
    }else if (x<=y){
        x=2;
    }
    
    printf("%d , %d", x,y);
}
