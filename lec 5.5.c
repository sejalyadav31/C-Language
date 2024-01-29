#include<stdio.h>// header file
main()
{
	int a,b,c;
	printf("enter the value of a,b,c.");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b&&a>c)
	{
		printf("A is Max");
	}
	else if(b>a&&b>c)
	{
		printf("b is max");
	}
	else if(c>a&&c>b)
	{
		printf("C is Max");
	}	
	
	
}
