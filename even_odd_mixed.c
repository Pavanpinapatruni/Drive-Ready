#include<stdio.h>
void eom(int n)
{
	int r,f=0;
	if(n%2)
	{
		while(n)
		{
			r=n%10;
			n=n/10;
			if(r%2)
			{
				continue;
			}
			else
			{
				f=1;
				break;
			}
		}
		if(f)
		{
			printf("Odd mixed");
		}
		else
		{
			printf("Odd");
		}
	}
	else
	{
		while(n)
		{
			r=n%10;
			n=n/10;
			if(r%2==0)
			{
				continue;
			}
			else
			{
				f=1;
				break;
			}
		}
		if(f)
		{
			printf("Even mixed");
		}
		else
		{
			printf("Even");
		}
	}
}
int main()
{
	int n;
	scanf("%d",&n);
	eom(n);
	return 0i;
}
