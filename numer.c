#include<stdio.h>
int main()
{
	int a,c=0,b;
	scanf("%d",&a);
	while(a>0)
	{
	b=a%10;
	a=a/10;c++;
	}
	printf("%d",c);
	return 0;
}
