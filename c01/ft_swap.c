#include <stdio.h>

void ft_swap(int *a, int *b)
{
    int x;
    x = *a;
    *a = *b;
    *b = x;
}

int main (void)
{
    int a = 3;
    int d = 9;

    ft_swap(&a, &d);
    printf("%d", a);
    printf("%d", d);
}