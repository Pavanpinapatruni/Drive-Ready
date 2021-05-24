#include<stdio.h>

int pronicnum(int n)
{
	int i=1;
	while(i*(i+1)<n)
	{
		i++;
	}
	return i*(i+1)==n;
}
int main()
{
	int t,n,i;
	scanf("%d",&t);
	for(i=1;i<=t;i++)
	{
		scanf("%d",&n);
		if(pronicnum(n))
		printf("True\n");
		else
		printf("False\n");
	}
	return 0;
}
