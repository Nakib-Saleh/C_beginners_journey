#include<stdio.h>
#include <math.h>
int main ()
{
    float a,b,c,x,y;
    scanf("%f %f %f",&a,&b,&c);
    x=(-b+sqrt(b*b-4*a*c))/(2*a);
    y=(-b-sqrt(b*b-4*a*c))/(2.00*a);

    printf("%f %f",x,y);
    printf("the absolute values are %f %f\n",fabs(x),fabs(y)); // for using float variable we need to use fabs() instead of abs()

    float power = pow(x,3);
    printf("cube of x %f\n",power);


    float squareroot = sqrt(fabs(x)); // sqrt() value has to be float or double type
    printf("%f",squareroot);
    return 0;
}
