#include<stdio.h>
int main()
{
  int m,n,k,i,j,a[5][5];
  printf("enter the m,n,k values");
  scanf("%d%d%d",&m,&n,&k);
  for(i=0;i<m;i++)
  {
    for(j=0;j<n;j++)
    {
      if((i+j)==k)
      {
        a[i][j]=1;
      }
      else
      {
        a[i][j]=0;
      }
    }
  }
  printf("the output matrix is");
  for(i=0;i<m;i++)
  {
    for(j=0;j<n;j++)
    {
      printf("%d\t",a[i][j]);
    }
    printf("\n");
  }
}
