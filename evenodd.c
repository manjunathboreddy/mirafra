#include<stdio.h>
int main()
{
int n;
printf("enter the number");
scanf("%d",&n);
if(((n)&(1))==0)
printf("%d is even number",n);
else 
printf("%d is odd number",n);
}

