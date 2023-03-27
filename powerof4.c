#include<stdio.h>
int main()
{
int n,result;
printf("enter the number");
scanf("%d",&n);

if ((((n)&(n-1))==0) && (((n)&(0xAAAAAAAA))==0))
printf("is power of 4");
else 
printf("not power of 4");
}
