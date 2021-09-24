#include <stdio.h>

int main(void)
{
	char ev[] = {[3] = 'l', [1] = 'e', [2] = 's', [0] = 't', [4] = 'a'};
	
	for(int i = 0; i < 5; i++)
		printf("%c ", ev[i]);
		
	printf("\n");
}