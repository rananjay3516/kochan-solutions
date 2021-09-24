#include <stdio.h>

int main(void)
{
	int i, j, matrix[5][3] = {
								{2, 3},
								{3, 5, 9},
								{4, 6, 8},
								{7},
								{0, 0, 0}	
					         };
					   
	for(i = 0; i < 5; i++)
	{
		for(j = 0; j < 3; j++)
		{
			printf("Matrix[%i][%i] = %i\n", i, j, matrix[i][j]);
		}

	}
}