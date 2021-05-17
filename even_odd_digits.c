#include<stdio.h>
int eoc(int n)
{
	int r,e,o,arr[1];
	e=0;
	int e1=1;
	int o1=1;
	o=0;
	while(n)
	{
		r=n%10;
		n=n/10;
		if(r%2)
		{
			o=o+r*o1;
			o1=10*o1;
		}
		else
		{
			e=e+r*e1;
			e1=e1*10;
		}
	}
	printf("%d\t",e);
	printf("%d",o);
}
int main()
{
	int n;
	scanf("%d",&n);
	eoc(n);
}
