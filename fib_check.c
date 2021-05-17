#include<stdio.h>
int fib_check(int n)
{
	int c,a=0,b=1;
	while(n>b){
		c=a+b;
		a=b;
		b=c;
		if(n==b){
			return 1;
		}
	}
	return 0;
}
int main()
{
	int n;
	scanf("%d",&n);
	if(fib_check(n))
	printf("True");
	else
	printf("False");
	return 0;
}
