#include<stdio.h>
int main()
{
	int l,m,n,i,j;
	scanf("%d%d%d",&l,&m,&n);
	if(n<m)
	{
		j=n;
		n=m;
		m=j;
	}
	for(i=m;i<=n;i++)
	{
		printf("%d X %d = %d\n",l,i,l*i);
	}
	return 0;
}
