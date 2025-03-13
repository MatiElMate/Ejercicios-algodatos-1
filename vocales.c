#include <stdio.h>
#include <stdbool.h>

bool es_vocal(){
    char x; // Declaro la variable "X"

    printf("Ingrese una letra: "); // Escribo en la terminal
    
    scanf("%c", &x); //Ejecuto el comando - scanf - para que el usuario pueda ingresar un dato de tipo char  || la instruccion "%c" le dice a C que vamos a ingresar un valor de tipo char 

    int i; // Declaro la variable i
    i = 0; // Inicializo el valor de i en 0

    char vocales[10]; // Declaro un array de tipo char, donde voy a meter las vocales para asi comparar mas facilmente "[10]" <-- Quiere decir que el array va a contener 10 elementos
    
    vocales[0]='a'; // Asigno cada vocal a una posicion del array (Imaginalo como si fuese una caja)
    vocales[1]='e';
    vocales[2]='i';
    vocales[3]='o';
    vocales[4]='u';
    vocales[5]='A';
    vocales[6]='E';
    vocales[7]='I';
    vocales[8]='O';
    vocales[9]='U';

    do{ // Comienzo un ciclo repetitivo do
        
        if (vocales[i] == x) // Comparo el i-esimo elemento con lo que ingreso el usuario
        {
            return 1; // Si los valores coinciden, devuelvo 1 y termino la ejecucion de la funcion "es_vocal"
        }
        i = i + 1; // Sumo uno a mi variable i
    
    }while (i < 10); // Esta es la condicion del do, se va a ejecutar siempre que i sea menor a 10
    
    return 0; // En caso de que en ningun momento el codigo haya entrado al if, devuelvo 0 y termino la ejecucion de la funcion "es_vocal"
}

int main(){

    if (es_vocal() == 1){ // Llamo a la funcion "es_vocal" y comparo lo que vaya a devolver con 1
        
        printf("Es una vocal!"); // Si "es_vocal" devuelve 1, quiere decir que se ingreso una vocal, asi que imprimo eso en la terminal
    }else
    {
        printf("Es una consonante D:<"); // En caso de que no sea uno, quiere decir que no se ingreso una vocal, asi que tambien lo imprimo en la terminal
    }
}