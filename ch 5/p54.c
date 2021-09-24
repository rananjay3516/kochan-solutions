#include <stdio.h>

int main(void)
{
	printf("What triangular number do you want?\n");
	
	int n, trinumber = 0, number;
	
	scanf("%i", &number);
	
	for(n = 1; n <= number; n++)
	{
		trinumber += n;
	}
	
	printf("%i", trinumber);
	
	return 0;
}