#include <stdlib.h>

int	absolute(int a)
{
	if (a < 0)
        a = -a;
	return (a);
}

int *ft_rrange(int start, int end)
{
    int i;
    int size;
    int *array;

    i = 0;
    size = absolute(end - start) + 1;
    array = (int *)malloc(size * sizeof(int));
    if (array == NULL)
    {
         return(NULL);
    }
    if (start <= end)
    {
        while (start <= end)
        {
            array[i] = end;
            end--;
            i++;
        }
    }
    else if (start >= end)
    {
        while (start >= end)
        {
            array[i] = end;
            end++;
            i++;
        }
    }
    return(array);
}

#include<stdio.h>
int main (void)
{
    int i = 0;
    
    int start = -2147483648;
    int end = 2147483647;
    int size = absolute(end - start) + 1;
    int *array = ft_rrange(start, end);
    while (i < size)
    {
        printf("%d, ", array[i]);
        i++;
    }
    printf("\n");
}
