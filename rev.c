# include<stdio.h>
int main()
{
  int x,r=0;
  printf("enter the no");
  scanf("%d",&x);
  while(x!=0)
  { 
    r=r*10;
    r=r+(x%10);
    x=x/10;
  }
  printf("the rev no =%d",r);
}
