// Reproduce exactly the behavior of the function strcspn
// (man strcspn).

// The function should be prototyped as follows:

#include <stdio.h>  
int isitthesame(char *reject, char *str)
{
    int i = 0;
    int j = 0;
    while(reject[j] != str[i])
        j++;
    if(reject[j] == str[i])
        return(1);
    else
        return(0);
}

int ft_strlen(const char *c)
{
    int i = 0;
    while(c[i])
        i++;
    return(i);

}

size_t	ft_strcspn(const char *s, const char *reject)
{
    size_t count = 0;
    int i = 0;

    int len = ft_strlen(reject);
    while(s[i])
    {
        int j = 0;
        while(reject[j])
        {
            if(reject[j] == s[i])
                break ;
            else
                j++;
        }
        if(j == len)
            count++;
        i++;
    }
    return(count);
}

int main(void)
{
    char *a = "123456789222";
    char *b = "25";

    printf("%li", ft_strcspn(a, b));
}