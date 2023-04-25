/*Leer un numero entero y determinar a cuanto es igual el promedio entero de sus dígitos*/
#include <stdio.h>
//se crea la función
int leer_entero_positivo() {
    int n;
    char c;
    do {
        printf("Ingrese un numero entero positivo: ");
        scanf("%d%c", &n, &c);
        if (c != '\n' || n < 0) {
            printf("Numero no valido. Intente de nuevo.\n");
            while (c != '\n') {
                scanf("%c", &c);
            }
        }
    } while (c != '\n' || n < 0);
    return n;
}
 
int main(int argc, char const *argv[])
{
    int n, suma = 0, separar, i = 0;
    float promedio;
    n = leer_entero_positivo();
    while (n >= 1)
    {
        separar = n % 10;
        n = n / 10;
        i = i + 1;
        suma = suma + separar;
    }
    //se genera el promedio
    promedio = suma / (float)i;
    printf("El promedio entero es %.f\n", promedio);
    return 0;
}

