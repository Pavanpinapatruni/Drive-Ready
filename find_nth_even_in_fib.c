#include<stdio.h>
int find_even(int n)
{
	int c,a=0,b=1,e=0;
	if(n==1){
	return 0;
	}
	while(e!=n-1)
	{
		c=a+b;
		a=b;
		b=c;
		if(c%2==0){
			e++;
		}
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
