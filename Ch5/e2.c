#include <stdio.h>

int main(void)
{
	int x, y;
	
	printf("Number     Square\n______     ______\n");
	
	for(x = 1; x < 11; x++)
	{
		y = x*x;
		printf("%3i          %3i\n", x, y);
	}
	
	return 0;
} 