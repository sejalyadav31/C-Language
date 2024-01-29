#include<stdio.h>// header file
main()
{
	int a,b,c,d,e;
	printf("enter the value of a,b,c,d,e.");
	scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
	if(a>b&&a>c&&a>d&&a>e)
	{
		printf("A is Max");
	}
	else if(b>a&&b>c&&b>d&&b>e)
	{
		printf("b is max");
	}
	else if(c>a&&c>b&&c>d&&c>e)
	{
		printf("C is Max");
	}
	else if(d>a&&d>b&&d>c&&d>e)
	{
		printf("D is max");
	}	
	else if(e>a&&e>b&&e>c&&e>d)
	{
		printf("E is max");
	}
	
	
}
