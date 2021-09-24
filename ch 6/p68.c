#include <stdio.h>

int main(void)
{
	float val1, val2;
	char o;
	
	printf("What d'you want to calculate?\n");
	scanf("%f %c %f", &val1, &o, &val2);
	
	if(o == '+')
		printf("%.2f\n", val1 + val2);
		
	else if(o == '-')
		printf("%.2f\n", val1 - val2);
		
	else if(o == '*')
		printf("%.2f\n", val1 * val2);
		
	else if(o == '/')
	{	
		if(val2 != 0)
		printf("%.2f\n", val1 / val2);
		else if(val2 == 0)
		printf("Not defined\n");
	}	
	else
		printf("Please enter valid operand and values\n");
	
}