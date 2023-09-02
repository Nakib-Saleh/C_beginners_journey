#include <stdio.h>
int main()
{
    float x, y, z, sub, tax, t;
    scanf("%f %f %f", &x, &y, &z);// enter value of 3 items
    sub = x + y + z;
    tax = .15 * sub;// calculating 15% tax
    t = tax + sub;

    printf("%20s%3s%5.2f\n", "Item1", "$", x);
    printf("%20s%3s%5.2f\n", "Another Item1", "$", y);
    printf("%20s%3s%5.2f\n\n", "Last Item1", "$", z);
    printf("%20s%3s%6.2f\n", "Sub total", "$", sub);
    printf("%20s%3s%6.2f\n", "Tax", "$", tax);
    printf("%20s%3s%6.2f\n", "Total", "$", t);
    return 0;
}