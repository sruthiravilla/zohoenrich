#include<stdio.h>
int main()
{
  int n,x,p=0,q;
  printf("enter the no");
  scanf("%d",&n);
  x=n;
  while(n!=0)
  {
    q=n%10;
    p=(p*10)+q;
    n=n/10;
  }
  if(x==p)
  {
    printf("it is a palndrome %d",p);
  }
  else
  {
    printf("it is not a palindrome");
  }
}
