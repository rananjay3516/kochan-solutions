#include <stdio.h>

float absVal (float x)
	{	
		if (x < 0)
			x = -x;
			
		return x;
	}
	
int main (void)
	{
		float f1 = -15.5, f2 = 20.0, f3 = -5.0;
		int i1 = -716;
		float result;
		
		result = absVal (f1);
		printf("Result = %.2f\n", result);
		printf("f1 = %.2f\n", f1);
		
		result = absVal (f2) + absVal (f3);
		printf("result = %.2f\n", result);
		
		result = absVal ( (float)i1 );
		printf("result = %.2f\n", result);
		
		result = absVal (i1);
		printf("result = %.2f\n", result);
		
		printf("result = %.2f\n", absVal (-6.0) / 4);
		
		return 0; 
	}