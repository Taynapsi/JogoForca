
#include <stdio.h>

#include <stdlib.h>

#include <time.h>

#include <string.h>


int main()
{
    void soma(int numeros[10])
    {
        int resultado = 0;
        for(int i = 0; i < 10; i++)
        {
            resultado += numeros[i];
        }

        printf("%d", resultado);
    }

    
}