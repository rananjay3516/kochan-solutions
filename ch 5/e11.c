#include <stdio.h>

int main(void)
{
	int number, r, sum;
	printf("Enter an integer: ");
	scanf("%i", &number);
	printf("\n");
	
	sum = 0;
	while(number != 0)
	{
		r = number % 10;
		sum += r;
		number /= 10;
	}
	
	printf("The sum of the digits is %i", sum);
}