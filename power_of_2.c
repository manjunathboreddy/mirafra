#include<stdio.h>
int main()
{
	int n;
	printf("enter the number");
	scanf("%d",&n);
	if (((n)&(n-1))==0)
		printf("is power of 2");
	else 
		printf("not power of 2");
}
