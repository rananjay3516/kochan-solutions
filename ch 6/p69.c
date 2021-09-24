#include <stdio.h>

int main(void)
{
	float val1, val2;
	char o;
	
	//Ask for user input to compute
	printf("Enter the problem to be computed: ");
	scanf("%f %c %f", &val1, &o, &val2);
	
	//Compute the problem
	
	switch(o)
	{
	case '+':
		printf("%.2f\n", val1 + val2);
		break;
		
	case '-':
		printf("%.2f\n", val1 - val2);
		break;
		
	case '*':
	case 'x':
		printf("%.2f\n", val1 * val2);
		break;
		
	case '/':
		
		if(val2 == 0)
		printf("Not defined\n");
		else
		printf("%.2f\n", val1 / val2);
		break;
		
	default:
		printf("Please enter a valid operand and/or values\n");
			
	}	
}