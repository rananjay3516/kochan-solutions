#include <stdio.h>

int main(void)
{
	int grade, number_grades, grade_total = 0, fail = 0;
	float avg;
	
	//Ask user for number of grades to be entered
	
	printf("Enter the total number of grades: ");
	scanf("%i", &number_grades);
	
	//Ask for indiviual grades
	
	for (int n = 1; n <= number_grades; n++)
	{
		printf("Enter Grade #%i: ", n);
		scanf("%i", &grade);
		
		grade_total += grade;
		
		if (grade < 65)
		fail++;
		
	}
	
	avg = (float) grade_total / number_grades;
	
	printf("The average of all your grades is %.2f\n", avg);
	printf("You failed in %i out of %i subjects\n", fail, number_grades);
	
	return 0;
}