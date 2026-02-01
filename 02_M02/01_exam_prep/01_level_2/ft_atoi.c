// Write a function that converts the string argument str to an integer (type int)
// and returns it.

// It works much like the standard atoi(const char *str) function, see the man.

// Your function must be declared as follows:
#include <stdio.h>

int	ft_atoi(const char *str)
{
    int res = 0;
    int i = 0;
    int sign = 1;

    if (str[i] == '+' || str[i] == '-')
    {
        if(str[i] == '-')
            sign += -1;
        i++;
    }

    while(str[i] >= '0' && str[i] <= '9' && str[i])
    {
        res = res * 10 + (str[i] - '0');
        i++;
    }

    res *= sign;
    return (res);
}

int main(void)
{
    char *str = "123";

    printf("%i", ft_atoi(str));
}