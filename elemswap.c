#include<stdio.h>
int main()
{
	int a[10][10],i,j,k,n,m,t;
	printf("enter the rows and columns:\n");
	scanf("%d%d",&n,&m);
	printf("enter the matrix\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			if((i==0||i==n-1)&&(j==0||j==m-1))
			{
				t=a[i][j];
				a[i][j]=a[i][m-1];
				a[i][m-1]=t;
			}
		}
	}
	printf("the output matrix:\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
}
