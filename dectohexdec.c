#include <stdio.h>

int main(void)
{
    int x,r,q;
    scanf("%d",&x);
    q=x;
    while(r<q)
    {
    q=q/16;
    r=x%16;
    }
    if(r==10)
    {
        r=65;
    }
    if(r==11)
    {
        r=66;
    }
    if(r==12)
    {
        r=67;
    }
    if(r==13)
    {
        r=68;
    }
    if(r==14)
    {
        r=69;
    }
    if(r==15)
    {
        r=70;
    }
    printf("%d",q);
    if(r<=9||r>15)
    {
        printf("%d",r);
    }
    else
    {
        printf("%c",r);
    }
	// your code goes here
	return 0;
}

