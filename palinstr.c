#include<stdio.h>
#include<string.h>
int main()
{
  char a[10],b[10];
  printf("enter the string");
  scanf("%s",a);
  strcpy(b,a);
  strrev(b);
  if (strcmp(a,b)==0)
  {
    printf("it is palindromic word");
  }
  else
  {
    printf("it is not a palindromic word");
  }
}
