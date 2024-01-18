#include<stdio.h> // header file

main() // main function
{
	int x=2;
	int y=3;
	int z=3;
	int ans;
	ans=(x*x*x)-(y*y*y)-(z*z*z)-(3*x*x*y)+(3*x*y*y)-(3*y*y*z)-(3*x*z*z)+(3*x*z*z)-(3*x*x*z)+(6*x*y*z);
	printf("%d",ans);
	
}
	
	