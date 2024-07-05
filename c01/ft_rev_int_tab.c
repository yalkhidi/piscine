#include <stdio.h>
void ft_rev_int_tab(int *tab, int size)
{
    int temporary;
    int index;

    index = 0;
    while(index < size / 2)
    {
        temporary = tab[index];
        tab[index] = tab[size - index - 1];
        tab[size - index - 1] = temporary;
        index++;
    }
}

int main()
{
    int array[] = {1, 2, 3, 4, 5}; // Declare and initialize the array
    int size = sizeof(array) / sizeof(array[0]); // Calculate the size of the array

    printf("Original array: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");

    ft_rev_int_tab(array, size); // Pass the array and its size to the function

    printf("Reversed array: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}