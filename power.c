#include <stdio.h>
int	recursive_power(int nb, int power)
{
    if(power > 1)
    {
        return nb * recursive_power(nb, power - 1);
    }
}

int main()
{
    printf("%d", recursive_power(2, 20));

    return 0;
}