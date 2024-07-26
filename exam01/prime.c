

int ft_is_prime(int nb)
{
    int i;

    if (nb <= 1)
    {
        return (0);
    }
    i = 2;
    if (nb % nb == 0 && nb % 1 == 0)
        return (1);
}