#include<stdio.h>
int main()
{
  int n,i=0,j,k,s=0,t,a[20];
  printf("enter the no");
  scanf("%d",&n);
  while(n!=0)
  { i++;
    n=n%10;
    a[i]=n;
    n=n/10;
  }
  for(j=1;j<=i;j++)
  { 
    for(k=j+1;k<=i;k++)
    {
      if(a[j]>a[k])
      {
        t=a[j];
        a[j]=a[k];
        a[k]=t;
      }
    } 
  }
  for(k=1;k<=i;k++)
  {
    s=((s*10)+a[k]);
  }
  printf("%d",s);
}
