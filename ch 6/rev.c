#include <stdio.h>

int main(void)
{
	int n, rev = 0;
	
	//Get number from user
	printf("Enter an integer: ");
	scanf("%i", &n);
	
	//Reverse the number
	
	while(n != 0)
	{
		rev = (rev * 10) + (n % 10);
		n /= 10;
	}
	
	printf("%i", rev);
	
}