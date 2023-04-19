/*Leer un numero entero y determinar a cuanto es igual el promedio entero de sus dígitos*/
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int n, suma, separar, i=0;
    float promedio;
    printf("Ingrese un numero entero \n");
    scanf("%d", &n);
    while (n>=1)
    {
        separar=n%10;
        n=n/10;
        i=i+1;
        suma=suma+separar;
    }
    promedio=suma/i;
    printf("El promedio entero es %.f", promedio);
    return 0;
}