#include <stdio.h>

int main(void)
{
	//Initializing an array
	
	int cubes[10] = {0, 1, 4, 9, 16};
	
	for(int i = 5; i < 10; i++)
		cubes[i] = i * i;
	
	for(int i = 0; i < 10; i++)
		printf("cubes[%i] = %i\n", i, cubes[i]);
	
}