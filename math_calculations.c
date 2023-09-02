#include <stdio.h>
#include <math.h>
int main()
{
    float d, area, peri;
    printf("give diameter:");
    scanf("%f", &d);
    area = 3.1416 * (d / 2) * (d / 2);
    peri = 2 * 3.1416 * (d / 2);
    printf("area=%f,perimeter=%f\n", area, peri);

    double b, h, diag;
    printf("give base and diagonal:");
    scanf("%lf %lf", &b, &h);
    diag = sqrt(b * b + h * h);
    printf("diagonal=%f", diag);

    float x1, y1, x2, y2, dis;
    printf("give first o ordinate (x1,y1):");
    scanf("%f %f", &x1, &y1);
    printf("give first o ordinate (x2,y2):");
    scanf("%f %f", &x2, &y2);

    dis = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
    printf("distance=%f", dis);
    return 0;
}