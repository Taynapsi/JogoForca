
#include <stdio.h>

int main()
{
    void soma(int* num, int a, int b)
    {
        (*num) = a + b;

        printf(" soma %d %d ", (*num), num);
    }

    int numero = 10;

    printf(" main %d %d \n", numero, &numero);

    soma(&numero, 10, 5);

    printf("main %d %d \n", numero, &numero);


}