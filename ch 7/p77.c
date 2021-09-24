#include <stdio.h>

int main(void)
{
	//Declaring elements
	
	int converted_num[64], base, index = 0;
	long int number;
	const char baseDigits[16] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};
	
	//Asking user for number to be converted and the base
	
	printf("Enter the number to be converted: ");
	scanf("%li", &number);
	
	do
	{
		printf("Enter a base (between 2 and 16): ");
		scanf("%i", &base);
	}
	while(base < 2 || base > 16);
	
	//Converting number 
	do
	{
		converted_num[index] = number % base;
		index++;
		number /= base;
	}
	while(number != 0);
	
	//Displaying the converted number
	for(index--; index >= 0; index--)
		printf("%c", baseDigits[converted_num[index]]);
	
	printf("\n");
	 
}