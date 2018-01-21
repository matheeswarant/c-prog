#include<stdio.h>
void main()
{
int num,result=0,rem;
scanf("%d",&num);
while(num!=0)
{
rem=num%10;
result=result+rem*rem*rem;
num=num%10;
}
if(result==num)
printf("number is armstrong no");
else
printf("number is not armstrong no");
}
