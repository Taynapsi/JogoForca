
#include <stdio.h>

int main()
{
    int soma(int nums[3])
    {
        int resultado = 0;
        for(int i = 0; i < 3; i++)
        {
            resultado += nums[i];
        }
        return resultado;
    }

    int nums[3];
    nums [0] = 10;
    nums [1] = 20;
    nums [2] = 30;

    int total = soma(nums);
    printf("O resultado é %d", total);
}
