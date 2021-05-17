#include<stdio.h>

int fun(int n,int i,int j){
	int r,rev=0;
	while(n){
		r=n%10;//1
		n=n/10;//0
		if(r==i)//1==4
		{
			rev=rev*10+j;//rev=56*10+6-->rev=566
		}
		else{
			rev=rev*10+r;//rev=5662*10+1-->rev=56621
		}
	}
	return rev;
}

int main()
{
	int n,i,j,k;
	scanf("%d%d%d",&n,&i,&j);//n=12445 i=4 j=6
	k=fun(n,i,j);
	printf("%d",fun(k,i,j));
}

