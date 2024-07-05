#include <stdio.h>
void    ft_sort_int_tab(int *tab, int size)
{
    int temporary;
    int i;
    int j;

    i = 0;
    while (i < size)
    {
        j = i + 1;
        while(j < size)
        {
            if(tab[j] < tab[i])
            {
                temporary = tab[i];
                tab[i] = tab[j];
                tab[j] = temporary;
            }
            j++;
        }
        i++;
    }
}

int main()
{
    int array[] = {65, 90, 2, 45, 5}; // Declare and initialize the array
    int size = sizeof(array) / sizeof(array[0]); // Calculate the size of the array

    printf("Original array: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");

    ft_sort_int_tab(array, size); // Pass the array and its size to the function

    printf("Reversed array: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}