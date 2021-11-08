
#include <stdio.h>
#include <string.h>

int main()
{

    void potencia(int* resultado, int a, int b)
    {     
        (*resultado) = a;

        for(int i = 1; i < b; i++)
        {
            (*resultado) = (*resultado)*a;
        }

        printf(" %d ^ %d = %d \n", a, b, (*resultado));
    }

    int resultado = 0;
    potencia(&resultado, 10, 5);

    printf("resultado: %d \n", resultado);

}