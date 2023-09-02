#include <stdio.h>
int main ()
{
 int x,y,z;
 scanf("%d %d %d",&x,&y,&z);

 if(x>y && x>z)
 {
   if(y>z){
        printf("x y z");
    }

    else {
        printf("x z y");
        }
 }


 else if (y>z && y>x)
 {
   if(x>z){
    printf(" y x z");
    }

   else{
    printf("y z x");
    }
 }



else
{
if(x>y){
    printf("z x y");
    }

else{
    printf("z y x");
    }
}

return 0;
}