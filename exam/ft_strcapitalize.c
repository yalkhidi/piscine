#include <stdio.h>

char *ft_strcapitalize(char *str)
{
    int i;
    i = 0;
    if (str[0] >= 'a' && str[0] <= 'z')
    {
        str[i] -= 32;
    }
    i = 1;
    while(str[i] != '\0')
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] += 32;
        }
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            if (!(str[i - 1] >= 'a' && str[i - 1] <= 'z'))
            {
                if (!(str[i - 1] >= '0' && str[i - 1] <= '9'))
                {
                    if (!(str[i -1] >= 'A' && str[i - 1] <= 'Z'))
                    {
                        str[i] -=32;
                    }
                }
            }
        }
        i++;
    }
    return (str);
}

int main(void)
{
    printf("%s", ft_strcapitalize("salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un"));
}