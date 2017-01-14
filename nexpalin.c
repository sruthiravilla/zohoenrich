#include<stdio.h>
int main()
{
  int n;
  printf("enter the no");
  scanf("%d",&n);
  for(i=n+1;j!=0;i++)
  { 
    int sum=0;
    int a=n;
    int rem=0;
    while(a!=0)
    {
      rem=a%10;
      sum=(sum*10)+rem;
      a=a/10;
    }
    if(i==sum)
    {
      j=0;
    }
  }
  printf("%d",i-1);
}
