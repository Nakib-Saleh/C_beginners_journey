#include <stdio.h>
#include <math.h>
int main ()

{
    float c,f;
   

    printf("enter the celcius temp:");
    scanf("%f",&c);


    f=(9/5.0)*c+32; // here if i give 9/5 instead of 9/5.00 then the result will be faulty as 9/5 is 1 instead of 1.8

    printf("\nfahrenheit %.2f",f);
    return 0;


}