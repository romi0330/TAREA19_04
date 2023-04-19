/*Utilizando ciclos anidados, generar las siguientes parejas de números:
0 1
1 1
2 1
3 1
4 2
5 2
6 2
7 2*/
#include <stdio.h>

int main (int argc, char *argv[]) {
    for (int i = 0; i <= 7; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            if (j == 0) 
            {
                printf("%d ", i);
            } 
            else 
            {
                printf("%d\n", (i/4) + 1);
            }
        }
    }
    
    return 0;

}