
int ft_str_len(char *str)
{
    int i;
    while (str[i] != '\0')
    {
        i++;
    }
    return(i);
}
char * ft_strrev(char *str)
{
    int i;
    int t;
    int len;

    len= ft_str_len(str) - 1;
    i=0;
    while(str[i] != '\0')
    {
        t = str[i];
        str[i] = str[len];
        str[len] = t;
        i++;
        len--;
    }
    return(str)
}