#include<stdio.h> // header file

main()
{
	int x=60;
	int y=20;
	x=x*y; // 6/3 x=2
	y=x/y; //2*3 y=6
	x=x/y; //6/2 x=3
	printf("x=%d\n",x);
	printf("y=%d\n",y); 	
}