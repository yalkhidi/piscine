#include <unistd.h>

int main(int ac, char *av)
{
    int i = 0;
    if (ac == 1)
    {
        if (av[1][i] >= 'A' && av[1][i] <= 'M' || av[1][i] >= 'a' && av[1][i] <= 'm' )
        {
            av[1][i] +=13;
        }
    }
}