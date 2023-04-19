/*leer dos números y mostrar todos los enteros comprendios entre ellos*/
#include <stdio.h>
int main(int argc, char const *argv[])
{
    float n1,n2;
    printf("Ingrese dos numeros \n");
    scanf("%f %f", &n1,&n2);
    for (int i = n1+1; i <=n2; i++)
    {
        printf("%d,", i);
    }
    printf("Todos esos son los enteros comprendidos entre %.f y %.f", n1, n2);
    return 0;
}