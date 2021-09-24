#include <stdio.h>

int gcd (int u, int v)
{
	int temp;
	
	while(v != 0)
		{
			temp = u % v;
			u = v;
			v = temp;
		}
	
	return u;
	
}

int main (void)
{
	int result;
	
	result = gcd (150, 35);
	printf("The GCD of 150 and 35 is %d\n", result);
	
	printf("The GCD of 83 and 240 is %d", gcd (83, 240));
	
	return 0;
	
}