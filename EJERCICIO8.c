/*Mostrar en pantalla todos los enteros comprendidos entre 20 y 200*/
#include <stdio.h>
int main(int argc, char const *argv[])
{
    for (int i = 20; i <=200; i++)
    {
        printf("%d-", i);
        i=i+1;
    }
    return 0;
}