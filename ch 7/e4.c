// Calculating average of 10 floats

#include <stdio.h>

int main(void)
{
	float values[10], sum = 0;
	int i;
	
	printf("Enter 10 values\n");
	
	for(i = 0; i < 10; i++)
		scanf("%f", &values[i]);
	
	for(i = 0; i < 10; i++)
		sum += values[i];
 	
	
	printf("Average of all the numbers = %g\n", sum/10);
}