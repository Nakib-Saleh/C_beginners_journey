#include<stdio.h>
#include <math.h>
int main ()
{
    int x=5;
    int y = ++x;
    printf("%d\n",x);
    printf("%d\n",y);

    int z=5;
    int r= z++; 

    
      printf("%d\n",z);
      printf("%d\n\n",r);
     
     int d=5;
     printf("%d\n",d++); //The current value of d (which is 5) is printed. After printing, the value of d is incremented by 1 (to 6).
     printf("%d\n",d++);//The current value of d (which is 6 after the previous increment) is printed. After printing, the value of d is incremented by 1 (to 7)
     printf("%d\n",++d); // output (7+1)=8 d is now 8
     printf("%d\n",d); // output 8 d is now 8
     printf("%d\n",d++);// output 8 d is now (8+1)=9
     printf("%d\n",--d);// output(9-1)=8 d is now 8
     printf("%d\n",d--);// output 8 d is now (8-1)=7
     printf("%d\n",d);//output 7


}