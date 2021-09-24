#include <stdio.h>
#define ARRAY_UB 15

int main(void)
{
	int fib_num[ARRAY_UB];
	
	//Initializing elements 0 and 1 of fib_num
	fib_num[0] = 0;
	fib_num[1] = 1;
	
	//Calculating rest of the Fibonacci numbers
	for(int i = 2; i < ARRAY_UB; i++)
		fib_num[i] = fib_num[i - 2] + fib_num[i - 1];
		
	//Printing elements 0 through 14 of the array
	for(int i = 0; i < ARRAY_UB; i++)
		printf("%i\n", fib_num[i]);
	
	return 0;

}