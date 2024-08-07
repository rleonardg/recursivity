#include <stdio.h>
int     ft_factorial(int number)
{
    if(number < 0)
    {
        return (0);
    }
    if(number == 0)
    {
        return (1);
    }
    if(number > 1)
    {
        return (number * ft_factorial(number - 1));
    }
    return (number);
}
int     main()
{
    printf("%d", ft_factorial(5));

    return 0;
}