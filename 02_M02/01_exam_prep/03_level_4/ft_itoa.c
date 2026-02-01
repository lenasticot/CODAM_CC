// Write a function that takes an int and converts it to a null-terminated string.
// The function returns the result in a char array that you must allocate.

// Your function must be declared as follows:

#include <stdlib.h>
#include <stdio.h>

int ft_len(int nbr)
{
    int i = 0;
    while(nbr > 0)
    {
        i++;
        nbr /= 10;
    }
    return (i);
}


char	*ft_itoa(int nbr)
{
    char *res;
    int len = ft_len(nbr);
    res = malloc(len) +1;
    int i = 0;

        if(nbr >= 0 && nbr <= 9)
        {  
            res[i] = nbr + '0';
            i++;
        }
        if(i >= len)
        {
        res[++i] = '\0';
        return (res);
        }
    
    ft_itoa(nbr / 10);
    ft_itoa(nbr % 10);
}


int main(void)
{
    int a = 123;
    char *c = ft_itoa(a);
    printf("%s", c);
    free(c);
}
