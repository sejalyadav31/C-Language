#include<stdio.h> // header file

main()
{
	// wap to find if a given no. is neutral or not using ladder if else(0)
	
	int num;
	printf("Enter a number:=\n");
	scanf("%d",&num);
	
	if(num>0) // positive
	{	
		printf("num is positive!");
		
	}
	else
	{
		if(num<0)
		{
			printf("num is negative!");		
		}
		else
		{
			printf("num is neutral !");
		}
	
		
	}
	
	
}
