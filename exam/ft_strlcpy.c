#include <stdio.h>
#include <string.h>

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{
    unsigned int i;
    int n;

    i = 0;
    n = 0;
    while (src[i] != '\0')
    {
        n++;
    }
    while (src[i] != '\0' && i < size - 1)
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (n);
}

int main(void)
{
	char src[] = "Wordddd";
	char dest[] = "Munia Tariq";
	printf("%d %s\n", ft_strlcpy(dest, src, 5), dest);
	//printf("%d %s", strlcpy(dest, src, 5), dest);
}