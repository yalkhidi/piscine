#include <unistd.h>

void ft_print_numbers(void)
{
    int num = '0';
    while (num <= '9')
    {
        write(1, &num, 1);
        num++;
    }
    write(1, "\n", 1);
}

int main(void)
{
    ft_print_numbers();
}