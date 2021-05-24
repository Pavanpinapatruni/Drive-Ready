#include<stdio.h>
int harshadnum(int n)
{
	int k,r,sum=0;
	k=n;
	while(k)
	{
		r=k%10;
		k=k/10;
		sum=sum+r;
	}
	return n%sum;
}
int main()
{
	int n;
	scanf("%d",&n);
	if(harshadnum(n))
	printf("False");
	else
	printf("True");
	return 0;
}
