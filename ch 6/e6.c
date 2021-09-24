#include <stdio.h>

int main(void)
{

	int integer, a, b, c, d, e, f;	
	
	//Getting a positive integer from user of maximum 6 digits
	do
	{
	printf("Please enter a positive integer (maximum 6 digits): ");
	scanf("%i", &integer);
	printf("\n");
	}
	while(integer < 0 || integer > 999999);
	
	/*Characterize the integer based on the number of digits and extract each digit and print it in words*/
	
	//One digit integer
	if (integer >= 0 && integer < 10)
	{
		switch(integer)
		{
			case 0:
				printf("Zero\n");
				break;
			
			case 1:
				printf("One\n");
				break;
				
			case 2:
				printf("Two\n");
				break;
				
			case 3:
				printf("Three\n");
				break;
				
			case 4:
				printf("Four\n");
				break;
				
			case 5:
				printf("Five\n");
				break;
				
			case 6:
				printf("Six\n");
				break;
				
			case 7:
				printf("Seven\n");
				break;
			
			case 8:
				printf("Eight\n");
				break;
				
			case 9:
				printf("Nine\n");
				break;
		}
	}
	
	//Two digits
	else if (integer > 9 && integer < 100)
	{
		//Splitting the digits into seperate variable 'a' and 'b'
		b = integer % 10;
		integer /= 10;
		a = integer % 10;
		
		//Testing and printing 'a' and 'b'
		
		switch(a)
		{
			case 0:
				printf("Zero ");
				break;
			
			case 1:
				printf("One ");
				break;
				
			case 2:
				printf("Two ");
				break;
				
			case 3:
				printf("Three ");
				break;
				
			case 4:
				printf("Four ");
				break;
				
			case 5:
				printf("Five ");
				break;
				
			case 6:
				printf("Six ");
				break;
				
			case 7:
				printf("Seven ");
				break;
			
			case 8:
				printf("Eight ");
				break;
				
			case 9:
				printf("Nine ");
				break;
		}
		
		switch (b)
		{
			case 0:
				printf("zero\n");
				break;
			
			case 1:
				printf("one\n");
				break;
				
			case 2:
				printf("two\n");
				break;
				
			case 3:
				printf("three\n");
				break;
				
			case 4:
				printf("four\n");
				break;
				
			case 5:
				printf("five\n");
				break;
				
			case 6:
				printf("six\n");
				break;
				
			case 7:
				printf("seven\n");
				break;
			
			case 8:
				printf("eight\n");
				break;
				
			case 9:
				printf("nine\n");
				break;
		}
	}
	
	//Three digits
	else if (integer > 99 && integer < 1000)
	{
		//Splitting the digits into seperate variable 'a', 'b' and 'c'
		c = integer % 10;
		integer /= 10;
		b = integer % 10;
		integer /= 10;
		a = integer % 10;
		
		//Testing and printing a, b and c
		
		switch(a)
		{
			case 0:
				printf("Zero ");
				break;
			
			case 1:
				printf("One ");
				break;
				
			case 2:
				printf("Two ");
				break;
				
			case 3:
				printf("Three ");
				break;
				
			case 4:
				printf("Four ");
				break;
				
			case 5:
				printf("Five ");
				break;
				
			case 6:
				printf("Six ");
				break;
				
			case 7:
				printf("Seven ");
				break;
			
			case 8:
				printf("Eight ");
				break;
				
			case 9:
				printf("Nine ");
				break;
		}
		
		switch(b)
		{
			case 0:
				printf("zero ");
				break;
			
			case 1:
				printf("one ");
				break;
				
			case 2:
				printf("two ");
				break;
				
			case 3:
				printf("three ");
				break;
				
			case 4:
				printf("four ");
				break;
				
			case 5:
				printf("five ");
				break;
				
			case 6:
				printf("six ");
				break;
				
			case 7:
				printf("seven ");
				break;
			
			case 8:
				printf("eight ");
				break;
				
			case 9:
				printf("nine ");
				break;
		}
		
		switch(c)
		{
			case 0:
				printf("zero\n");
				break;
			
			case 1:
				printf("one\n");
				break;
				
			case 2:
				printf("two\n");
				break;
				
			case 3:
				printf("three\n");
				break;
				
			case 4:
				printf("four\n");
				break;
				
			case 5:
				printf("five\n");
				break;
				
			case 6:
				printf("six\n");
				break;
				
			case 7:
				printf("seven\n");
				break;
			
			case 8:
				printf("eight\n");
				break;
				
			case 9:
				printf("nine\n");
				break;
		}
		
	}
	
	//Four digits
	else if (integer > 999 && integer < 10000)
	{
		//Splitting the digits into seperate variable 'a', 'b', 'c' and 'd'
		d = integer % 10;
		integer /= 10;
		c = integer % 10;
		integer /= 10;
		b = integer % 10;
		integer /= 10;
		a = integer % 10;
		
		//Testing and printing variables a, b, c and d
		
		switch(a)
		{
			case 0:
				printf("Zero ");
				break;
			
			case 1:
				printf("One ");
				break;
				
			case 2:
				printf("Two ");
				break;
				
			case 3:
				printf("Three ");
				break;
				
			case 4:
				printf("Four ");
				break;
				
			case 5:
				printf("Five ");
				break;
				
			case 6:
				printf("Six ");
				break;
				
			case 7:
				printf("Seven ");
				break;
			
			case 8:
				printf("Eight ");
				break;
				
			case 9:
				printf("Nine ");
				break;
		}
		
		switch(b)
		{
			case 0:
				printf("zero ");
				break;
			
			case 1:
				printf("one ");
				break;
				
			case 2:
				printf("two ");
				break;
				
			case 3:
				printf("three ");
				break;
				
			case 4:
				printf("four ");
				break;
				
			case 5:
				printf("five ");
				break;
				
			case 6:
				printf("six ");
				break;
				
			case 7:
				printf("seven ");
				break;
			
			case 8:
				printf("eight ");
				break;
				
			case 9:
				printf("nine ");
				break;
		}
		
		switch(c)
		{
			case 0:
				printf("zero ");
				break;
			
			case 1:
				printf("one ");
				break;
				
			case 2:
				printf("two ");
				break;
				
			case 3:
				printf("three ");
				break;
				
			case 4:
				printf("four ");
				break;
				
			case 5:
				printf("five ");
				break;
				
			case 6:
				printf("six ");
				break;
				
			case 7:
				printf("seven ");
				break;
			
			case 8:
				printf("eight ");
				break;
				
			case 9:
				printf("nine ");
				break;
		}
		
		switch(d)
		{
			case 0:
				printf("zero\n");
				break;
			
			case 1:
				printf("one\n");
				break;
				
			case 2:
				printf("two\n");
				break;
				
			case 3:
				printf("three\n");
				break;
				
			case 4:
				printf("four\n");
				break;
				
			case 5:
				printf("five\n");
				break;
				
			case 6:
				printf("six\n");
				break;
				
			case 7:
				printf("seven\n");
				break;
			
			case 8:
				printf("eight\n");
				break;
				
			case 9:
				printf("nine\n");
				break;
		}
		
	}
	
	//Five digits
	else if (integer > 9999 && integer < 100000)
	{
		//Splitting and storing digits in variables 'a', 'b', 'c', 'd' and 'e'
		
		e = integer % 10;
		integer /= 10;
		d = integer % 10;
		integer /= 10;
		c = integer % 10;
		integer /= 10;
		b = integer % 10;
		integer /= 10;
		a = integer % 10;
		
		//Testing and printing a, b, c, d and e
		
		switch(a)
		{
			case 0:
				printf("Zero ");
				break;
			
			case 1:
				printf("One ");
				break;
				
			case 2:
				printf("Two ");
				break;
				
			case 3:
				printf("Three ");
				break;
				
			case 4:
				printf("Four ");
				break;
				
			case 5:
				printf("Five ");
				break;
				
			case 6:
				printf("Six ");
				break;
				
			case 7:
				printf("Seven ");
				break;
			
			case 8:
				printf("Eight ");
				break;
				
			case 9:
				printf("Nine ");
				break;
		}
		
		switch(b)
		{
			case 0:
				printf("zero ");
				break;
			
			case 1:
				printf("one ");
				break;
				
			case 2:
				printf("two ");
				break;
				
			case 3:
				printf("three ");
				break;
				
			case 4:
				printf("four ");
				break;
				
			case 5:
				printf("five ");
				break;
				
			case 6:
				printf("six ");
				break;
				
			case 7:
				printf("seven ");
				break;
			
			case 8:
				printf("eight ");
				break;
				
			case 9:
				printf("nine ");
				break;
		}
		
		switch(c)
		{
			case 0:
				printf("zero ");
				break;
			
			case 1:
				printf("one ");
				break;
				
			case 2:
				printf("two ");
				break;
				
			case 3:
				printf("three ");
				break;
				
			case 4:
				printf("four ");
				break;
				
			case 5:
				printf("five ");
				break;
				
			case 6:
				printf("six ");
				break;
				
			case 7:
				printf("seven ");
				break;
			
			case 8:
				printf("eight ");
				break;
				
			case 9:
				printf("nine ");
				break;
		}
		
		switch(d)
		{
			case 0:
				printf("zero ");
				break;
			
			case 1:
				printf("one ");
				break;
				
			case 2:
				printf("two ");
				break;
				
			case 3:
				printf("three ");
				break;
				
			case 4:
				printf("four ");
				break;
				
			case 5:
				printf("five ");
				break;
				
			case 6:
				printf("six ");
				break;
				
			case 7:
				printf("seven ");
				break;
			
			case 8:
				printf("eight ");
				break;
				
			case 9:
				printf("nine ");
				break;
		}
		
		switch(e)
		{
			case 0:
				printf("zero\n");
				break;
			
			case 1:
				printf("one\n");
				break;
				
			case 2:
				printf("two\n");
				break;
				
			case 3:
				printf("three\n");
				break;
				
			case 4:
				printf("four\n");
				break;
				
			case 5:
				printf("five\n");
				break;
				
			case 6:
				printf("six\n");
				break;
				
			case 7:
				printf("seven\n");
				break;
			
			case 8:
				printf("eight\n");
				break;
				
			case 9:
				printf("nine\n");
				break;
		}
		
	}
	
	//Six digits
	else if (integer > 99999 && integer < 1000000)
	{
		//Splitting and storing the digits in variables 'a', 'b', 'c', 'd', 'e' and 'f'
		
		f = integer % 10;
		integer /= 10;
		e = integer % 10;
		integer /= 10;
		d = integer % 10;
		integer /= 10;
		c = integer % 10;
		integer /= 10;
		b = integer % 10;
		integer /= 10;
		a = integer % 10;
		
		//Testing and printing a, b, c, d, e and f
		
		switch(a)
		{
			case 0:
				printf("Zero ");
				break;
			
			case 1:
				printf("One ");
				break;
				
			case 2:
				printf("Two ");
				break;
				
			case 3:
				printf("Three ");
				break;
				
			case 4:
				printf("Four ");
				break;
				
			case 5:
				printf("Five ");
				break;
				
			case 6:
				printf("Six ");
				break;
				
			case 7:
				printf("Seven ");
				break;
			
			case 8:
				printf("Eight ");
				break;
				
			case 9:
				printf("Nine ");
				break;
		}
		
		switch(b)
		{
			case 0:
				printf("zero ");
				break;
			
			case 1:
				printf("one ");
				break;
				
			case 2:
				printf("two ");
				break;
				
			case 3:
				printf("three ");
				break;
				
			case 4:
				printf("four ");
				break;
				
			case 5:
				printf("five ");
				break;
				
			case 6:
				printf("six ");
				break;
				
			case 7:
				printf("seven ");
				break;
			
			case 8:
				printf("eight ");
				break;
				
			case 9:
				printf("nine ");
				break;
		}
		
		switch(c)
		{
			case 0:
				printf("zero ");
				break;
			
			case 1:
				printf("one ");
				break;
				
			case 2:
				printf("two ");
				break;
				
			case 3:
				printf("three ");
				break;
				
			case 4:
				printf("four ");
				break;
				
			case 5:
				printf("five ");
				break;
				
			case 6:
				printf("six ");
				break;
				
			case 7:
				printf("seven ");
				break;
			
			case 8:
				printf("eight ");
				break;
				
			case 9:
				printf("nine ");
				break;
		}
		
		switch(d)
		{
			case 0:
				printf("zero ");
				break;
			
			case 1:
				printf("one ");
				break;
				
			case 2:
				printf("two ");
				break;
				
			case 3:
				printf("three ");
				break;
				
			case 4:
				printf("four ");
				break;
				
			case 5:
				printf("five ");
				break;
				
			case 6:
				printf("six ");
				break;
				
			case 7:
				printf("seven ");
				break;
			
			case 8:
				printf("eight ");
				break;
				
			case 9:
				printf("nine ");
				break;
		}
		
		switch(e)
		{
			case 0:
				printf("zero ");
				break;
			
			case 1:
				printf("one ");
				break;
				
			case 2:
				printf("two ");
				break;
				
			case 3:
				printf("three ");
				break;
				
			case 4:
				printf("four ");
				break;
				
			case 5:
				printf("five ");
				break;
				
			case 6:
				printf("six ");
				break;
				
			case 7:
				printf("seven ");
				break;
			
			case 8:
				printf("eight ");
				break;
				
			case 9:
				printf("nine ");
				break;
		}
		
		switch(f)
		{
			case 0:
				printf("zero\n");
				break;
			
			case 1:
				printf("one\n");
				break;
				
			case 2:
				printf("two\n");
				break;
				
			case 3:
				printf("three\n");
				break;
				
			case 4:
				printf("four\n");
				break;
				
			case 5:
				printf("five\n");
				break;
				
			case 6:
				printf("six\n");
				break;
				
			case 7:
				printf("seven\n");
				break;
			
			case 8:
				printf("eight\n");
				break;
				
			case 9:
				printf("nine\n");
				break;
		}
	}
	
}