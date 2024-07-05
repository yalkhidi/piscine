#include <unistd.h>

// int main(void)
// {
//     write(1, "9876543210\n", 11);
// }

int main (void)
{
    char d = '9';
    while (d >= '0')
    {
        write(1, &d, 1);
        d--;
    }
    write(1, "\n", 1);
}