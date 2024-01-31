#include<stdio.h> // header file

main()

{
	char ans;
	printf("Enter your choise(only capital word) :");
	scanf(" %c",&ans);
	
	switch(ans) // char
	{
		case 'M' : printf("Monday");break;
		case 'T' : printf("Tuesday");break;
		case 'W' : printf("Wednesday");break;
		case 't' : printf("Thursday");break;
		case 'F' : printf("Friday");break;
		case 's' : printf("Staurday");break;
		case 'S' : printf("Sunday");break;
	}
}
