#include<stdio.h>
#include "ispalindrome.h"
int main()
{
	int n,k;
	scanf("%d",&n);
	k=ispalindrome(n);
	if(k==1)
	{
		printf("True");
	}
	else
	{
		printf("False");
	}
	return 0;
}
