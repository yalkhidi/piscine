#include <stdlib.h>
#include <stdio.h>

int absloute(int a)
{
    if (a < 0)
        a = -a;
    return a;
}

int *ft_range(int start, int end)
{
    int i;
    int *array;
    int size;

    i = 0;
    size = absloute(end - start) + 1;
    array = (int *)malloc(size * sizeof(int));
    if (array == NULL)
        return (NULL);
    if (start <= end)
    {
        while (start <= end)
        {
            array[i] = start;
            start++;
            i++;
        }
    }
    else if (start > end)
    {
        while (start >= end)
        {
            array[i] = start;
            start--; 
            i++;
        }
    }
    return (array);
}

int main(void)
{
    int i;
    int size;
    int *array;
    int start;
    int end;

    i = 0;
    start = 3;
    end = -3;
    size = absloute(end - start) + 1;
    array = ft_range(start, end);
    while (i < size)
    {
        printf("%d\n", array[i]);
        i++;
    }

}