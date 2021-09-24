#include <stdio.h>

int main(void)
{
	float acc = 0, input;
	char o;
	
	//Ask user for operation
	
	printf("Begin calculations\n");
	
	while(1)
	{
		scanf("%f %c", &input, &o);
		
		switch(o)
			{
				case 's':
				case 'S':
					acc = input;
					printf("= %f\n", acc);
					break;								
					
				case '+':
					acc += input;
					printf("= %f\n", acc);
					break;
					
				case '-':
					acc -= input;
					printf("= %f\n", acc);
					break;
					
				case '*':
				case 'x':
				
					acc *= input;
					printf("= %f\n", acc);
					break;
					
				case '/':
					if(input == 0)
						printf("Not defined\n");
					else
						acc /= input;
				        printf("%f\n", acc);
					break;
				
				case 'e':
				case 'E':
					printf("= %f\n", acc);
					printf("End of calculations\n");
					break;
						
				default:
					printf("Please enter valid operator\n");
					break;
					
			}
	}
}