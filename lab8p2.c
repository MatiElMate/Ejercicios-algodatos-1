#include <stdio.h>
#include <stdbool.h>
#include <math.h>

int main(){
    int x;
    int i;
    bool res;
    int aux;
    printf("Ingresa x: ") ;
    scanf("%d", &x);
    printf("Ingresa res (0 o 1) : ");
    scanf("%d", &res);
    printf("Ingresa i: ");
    scanf("%d", &i);
    

    if (i<2)
    {
        i = 2;
    }
    
    if (i<x && res)
    {
         do{
            aux = (x % i != 0);
            res = res && aux;
            i= i+1;
        }while (i<x && res);
    }
    
         printf("%d , %d , %d", x,i,res);     
}