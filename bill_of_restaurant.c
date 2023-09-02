#include <stdio.h>
int main()
{
    printf("%20s%3s%5.2f\n", "Item1", "$", 3.44);
    printf("%20s%3s%5.2f\n", "Another Item1", "$", 33.44);
    printf("%20s%3s%5.2f\n\n", "Last Item1", "$", 63.00);
    printf("%20s%3s%6.2f\n", "Sub total", "$", 99.8);
    printf("%20s%3s%6.2f\n", "Tax", "$", 14.98);
    printf("%20s%3s%6.2f\n", "Total", "$", 114.86);
    return 0;
}