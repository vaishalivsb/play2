#include<stdio.h>
int main()
{
	int a[10],i,j,t;
	for(i=1;i<=10;i++)
	{
		scanf("%d",&a[i]);
	}
	for(j=1;j<=10;j++)
	{
		if(a[1]>a[j])
	t=a[1];
		a[1]=a[j];
		
		}
	printf("%d",t);
	return 0;
}
