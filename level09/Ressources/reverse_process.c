#include <stdio.h>

int main (int ac, char **av)
{
    char *str = av[1];
    int i = 0;

    while (str[i])
    {
        str[i] -= i;
        i++;
    }

    printf("%s", str);

    return (0);
}