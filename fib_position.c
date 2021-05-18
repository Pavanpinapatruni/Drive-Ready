#include<stdio.h>
int fib_pos(int n)
{
	int a=0,b=1,c=1,i=2;
	if(n==0 || n==1)
	return n+1;
	while(c<n)
	{
		c=a+b;
		a=b;
		b=c;
		i++;
		
	}
	
	return (c==n)?i:0;
}
int main()
{
	int n,k;
	scanf("%d",&n);
	k=fib_pos(n);
	if(k!=0)
	printf("%d",k);
	else
	printf("False");
	return 0;
}
