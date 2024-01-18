#include<stdio.h> // header file

main()
{
	int x=5;
	int y=2;
	int z=3;
	int ans;
	ans=(x*x*x)+(3*x*x*y)+(3*x*x*z)+(3*x*y*y)+(6*x*y*z)+(3*x*z*z)+(y*y*y)+(3*y*y*z)+(3*y*z*z)+(z*z*z);
	printf("%d",ans);
	

}