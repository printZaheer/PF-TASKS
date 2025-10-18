#include<stdio.h>

int main()
{
    int pervious1 = 0, pervious2 = 1, current;
    int n_fib0nacci_series = 10;

    printf(" %d,%d", pervious1, pervious2);

    for (int counter = 3; counter <= n_fib0nacci_series; counter++)
    {
        current = pervious1 + pervious2;
        printf(" %d\t", current);

        pervious1 = pervious2;
        pervious2 = current;
    }

    return 0;
}