#include<stdio.h>
int find_even(int n)
{
	int c,a=0,b=1,e=0;
	if(n==1){
	return 0;
	}
	else if(n==2)
	return 1;
	while(e!=n-2)
	{
		c=a+b;
		a=b;
		b=c;
		e++;
	}
		
	return c;
}
int main()
{
	int n;
	scanf("%d",&n);
	printf("%d",find_even(n));
	return 0;
}
