#include <stdio.h>
int     ft_fibonacci(int index)
{
    if(index < 0)
    {
        return (0);
    }
    if(index < 2)
    {
        return (index);
    }
    return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}
int     main()
{
    printf("%d", ft_fibonacci(8));

    return 0;
}