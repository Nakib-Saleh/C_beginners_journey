#include<stdio.h>
int main ()
{
    float x,y;
    scanf("%d %d",&x,&y);
    if(x>y){
        printf("y<x");

    }
    else if(x<y){
        printf("x<y");
    }
    else{
        printf("x=y");
    }

}