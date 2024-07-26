#include <stdlib.h>

char *ft_itoa(int nbr)
{
    int n;
    int len;
    char *result;

    n = nbr;
    len = 0;
    if (nbr == -2147483648)
    {
        return ("-2147483648");
    }
    if (nbr <= 0)
    {
        len++;
    }
    while (n)
    {
        n /= 10;
        len++;
    }
    result = (char *)malloc((len + 1) * sizeof(char));
    if (result == NULL)
    {
        return (NULL);
    }
    result[len] = '\0';
    len--;
    if (nbr == 0)
    {
        result[0] = '0';
        return (result);
    }
    if (nbr < 0)
    {
        result[0] = '-';
        nbr = -nbr;
    }
    while (nbr)
    {
        result[len] = nbr % 10 + '0';
        n /= 10;
        len--;
    }
    return (result);
}

#include <stdio.h>
int main (void)
{
    int nbr = 12345;
    printf("%s", ft_itoa(nbr));
}