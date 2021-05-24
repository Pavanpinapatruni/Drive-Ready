#include<stdio.h>
#include<math.h>
int disarium(int n)
{
	int i=0,r,sum=0;
	int k,j;
	k=n;
	j=n;
	while(k)
	{
		k=k/10;
		i++;
	}
	while(j)
	{
		r=j%10;
		j=j/10;
		sum=sum+pow(r,i);
		i--;
	}
	return sum==n;
}
int main()
{
	int n;
	scanf("%d",&n);
	if(disarium(n))
	printf("True");
	else
	printf("False");
	return 0;
}
