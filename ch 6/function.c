#include <stdio.h>

void speak(void);
void goal(int n);
void mainfunction(int n);
int main(void)
{
	
	mainfunction(3);
	
}

void speak(void)
	{
		printf("This is a function side effect\n");
	}
	
void goal(int n)
{
	for(int x = 0; x < n; x++)
	{
		printf("Goal\n");
	}
}

void mainfunction(int n)
{
	for(int x = 0; x < n; x++)
	{
		speak();
		printf("This was the first function\n");
		goal(3);
	}
}