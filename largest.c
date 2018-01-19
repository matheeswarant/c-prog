#include<stdio.h>
void main()
{
int a,b,c;
printf("enter the numbers");
scanf("%d%d%d",&a,&b,&c);
if((a>=b)&&(a>=c))
printf("a is the largest number");
if((b>=a)&&(b>=c))
printf("b is the greatest number");
if((c>=a)&&(c>=b))
printf("c is the largest number");
}
