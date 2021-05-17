#include<stdio.h>
#include<math.h>

int main()
{
	int n,nw,h=0;
	int arr[4];
	scanf("%d",&n);
	scanf("%d%d%d%d",&arr[0],&arr[1],&arr[2],&arr[3]);
	printf("%d.%d.%d.%d\n",arr[0],arr[1],arr[2],arr[3]);
	
	arr[3]=0;
	while((n+2)>pow(2,h))
		h++;

	
	if(h>8)
	{
		arr[2]=0;
		int i;
		for(i=1;i<=(pow(2,16)/pow(2,h));i++){
		printf("%d.%d.%d.%d\t",arr[0],arr[1],arr[2],arr[3]);
		arr[2]=arr[2]+(pow(2,h)/pow(2,8))-1;
		arr[3]=255;
		printf("%d.%d.%d.%d\n",arr[0],arr[1],arr[2],arr[3]);
		arr[2]++;
		arr[3]=0;
	}
	}
	else
	{
		int i;
		for(i=1;i<=(pow(2,8)/pow(2,h));i++)
		{
			printf("%d.%d.%d.%d\t",arr[0],arr[1],arr[2],arr[3]);
			arr[3]=arr[3]+pow(2,h);
			printf("%d.%d.%d.%d\n",arr[0],arr[1],arr[2],arr[3]-1);
		}
		
	}
	
	return 0;
}
