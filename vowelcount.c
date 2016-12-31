#include<stdio.h>
#include<string.h>
int main()
{
	char c[50];
	int a=0,e=0,i=0,o=0,u=0,j,l;
	printf("enter the string:\t");
	scanf("%s",c);
	l=strlen(c);
	for(j=0;j<l;j++)
	{
		if(c[j]=='a'||c[j]=='A')
		{
			a++;
		}
		if(c[j]=='e'||c[j]=='E')
		{
			e++;
		}
		if(c[j]=='i'||c[j]=='I')
		{
			i++;
		}
		if(c[j]=='o'||c[j]=='O')
		{
			o++;
		}
		if(c[j]=='u'||c[j]=='U')
		{
			u++;
		}
	}
	printf("a:%d\ne:%d\ni:%d\no:%d\nu:%d\n",a,e,i,o,u);
}
