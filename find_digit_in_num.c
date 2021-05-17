#include<stdio.h>
int check(int n,int k)
{
	int r;
	while(n)
	{
		r=n%10;
		n=n/10;
		if(r==k)
		{
			return 1;
		}
	}
	return 0;
}
int main()
{
	int n,k;
	scanf("%d%d",&n,&k);
	if(check(n,k))
	{
		printf("True");
	}
	else
	{
		printf("False");
	}
}
