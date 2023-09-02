#include<stdio.h>
#include <math.h>
int main ()
{
 
 float x;

 scanf("%f",&x);
 printf("%f %f %f %f\n",logf(x),log10l(x),log(x),log10f(x)); // as float is used so logf() is correct, here log means ln(), for log base 10 use log10f()

 printf("%f %f %f",pow(x,2),powf(x,2),powl(x,2)); // as float is used use powf()

}