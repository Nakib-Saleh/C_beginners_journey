#include <stdio.h>
int main ()
{
char x;
scanf("%c",&x);

if(x=='a'||x=='e'||x=='i'||x=='o'||x=='u'||x=='A'||x=='E'||x=='I'||x=='O'||x=='U')
{
    printf("%c is a vowel",x);
}
else
{
    printf("it is a consonent");
}

}