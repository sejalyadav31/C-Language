#include<stdio.h>// header file
main()
{
	int a,b,c,d;
	printf("enter the value of a,b,c,d.");
	scanf("%d%d%d%d",&a,&b,&c,&d);
	if(a>b&&a>c&&a>d)
	{
		printf("A is Max");
	}
	else if(b>a&&b>c&&b>d)
	{
		printf("b is max");
	}
	else if(c>a&&c>b&&c>d)
	{
		printf("C is Max");
	}
	else if(d>a&&d>b&&d>c)
	{
		printf("D is max");
	}	
	
	
}
