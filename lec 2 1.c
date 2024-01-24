#include<stdio.h> // header file
main()
{
	int a,b;
	
	printf("Enter a&b:");
	scanf("%d%d",&a,&b);
	if(a>b)
	{
		printf("A is Maximum");
	}
	else if(b>a)
	{
		printf("B is Maximum !");
	}
	else
	{
		printf("A and B are Equal !");
		
	}
	
	
}
