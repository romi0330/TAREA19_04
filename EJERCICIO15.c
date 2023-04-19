/*Escribir en pantalla el resultado de sumar los primeros 20 multiplos de 3*/
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int suma;
    for (int i = 3; i <=60; i++)
    {
        suma=suma+i;
        printf("%d,", i);
        i=i+2;
    }
    printf("La suma de los 20 primeros multiplos de 3 es %d", suma);
    
    return 0;
}