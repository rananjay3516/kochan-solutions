#include <stdio.h>

void printMessage (void)
{
	printf("With great power, comes great responsibility\n");
}

int main (void)
{
	for (int i = 0; i < 5; i++)
		printMessage();
		
		
	return 0;
}