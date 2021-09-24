#include <stdio.h>

int main(void)
{
	int year;
	printf("Enter year to be tested: ");
	scanf("%i", &year);
	
	
	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
		printf("It's a leap year !\n");
		
	else
		printf("It's not a leap year\n");
		
	return 0;
}