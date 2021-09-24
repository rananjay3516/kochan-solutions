#include <stdio.h>

int main(void)
{
	int trinumber = 0, n = 1;
	
	while(n < 201)
	{
		trinumber += n;
		n++;
	}
	
	
	printf("The 200th triangular number is %i", trinumber);
	
	return 0;
	
}