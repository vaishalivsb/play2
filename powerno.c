#include<stdio.h>
int main()
{
	int a,i;
	scanf("%d",&a);
	for(i=1;i<=10;i++)
	{
		if(pow(2,i)==a)
		{
			printf("Yes");
		}
	}
	return 0;
	
}
