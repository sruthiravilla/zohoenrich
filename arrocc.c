#include<stdio.h>
int main()
{
  int a[10],i,n,k,count=0;
  printf("enter the no of elements");
  scanf("%d",&n);
  printf("enter the aray elements");
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  printf("enter the key");
  scanf("%d",&k);
  for(i=0;i<n;i++)
  {
    if(k==a[i])
    {
      count++;
    }
  }
  printf("%d key element occurs %d times",k,count);
}
