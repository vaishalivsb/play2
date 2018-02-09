#include<stdio.h>
int main()
{
	int a;
	//char a;
	scanf("%c",&a);
	if(((a>='a')&&(a<='z'))||((a>='A')&&(a<='Z')))
	{
		printf("no");
	}
		else
		{
			printf("Yes");
		}
	return 0;
	
}
