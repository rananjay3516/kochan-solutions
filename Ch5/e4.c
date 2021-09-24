#include <stdio.h>

int main(void)
{
	int n, x, y;
	
	printf("Number     Factorial\n______     ________\n");
	
	for(n = 1; n < 11; n++)
	{
		y = n;
		
		for(x = (y -1); x > 0; x--)
		{
			y *= x;
		}
		
		printf("  %2i          %i\n", n, y);
	}
	
	return 0;
}