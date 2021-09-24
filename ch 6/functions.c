#include <stdio.h>

/* Wrtiting funtions to detect and print digits in words - for one digit capital and small caps, small caps and last word*/


//Function for printing one digit integer in words
void all_caps_word_single_digit(int n)
{
	switch(n)
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

//Function for printing small caps words for digits in between
void small_caps_word(int n)
{
	switch(n)
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
}

//Function for printing word for the last digit
void last_word(int n)
{
	switch(n)
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

//Function for printing the first digit word of a 2 or more digits integer
void all_caps_word(int n)
{
	switch(n)
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
}