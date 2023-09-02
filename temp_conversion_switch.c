#include <stdio.h>
int main()
{
    int x;
    float y,z;
    printf("for converting F to C press 1:\n");
    printf("for converting c to F press 2:\n");
    scanf("%d",&x);

    switch(x)
    {
        case 1:
        printf("enter a F value:");
        scanf("%f",&y);
        z=(5/9.00)*(y-32);
        printf("The c is %.2f",z);
        break;

        case 2:
        printf("enter a C value:");
        scanf("%f",&y);
        z=(9/5.00)*y+32;
        printf("The F is %.2f",z);
        break;

        default:
        printf("enter a valid value");
        break;


    }
}