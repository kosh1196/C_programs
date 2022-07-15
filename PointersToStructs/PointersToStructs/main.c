/*
* File:   main.c
* Author: Albert
*/

#include <stdio.h>
#include <stdlib.h>

/*
* Demonstrates pointers to structs
*/
int main(int argc, char** argv)
{
	typedef struct Student Student;

	struct Student {
		int number;
		float percent;
		char grade;
	};

	// declare struct variable, pointer to struct, and print information
	Student student0 = { 101010101, 89.5, 'B' };
	Student* pStudent0 = &student0;
	printf("Student 0\n");
	printf("---------\n");
	printf("Number: %d\n", pStudent0->number);
	printf("Percent: %.1f\n", pStudent0->percent);
	printf("Grade: %c\n", pStudent0->grade);
	printf("\n");

	// declare pointer to new struct, initialize, and print information
	Student* pStudent1 = malloc(sizeof(Student));

	// check for allocation failure
	if (!pStudent1)
	{
		return (EXIT_FAILURE);
	}

	(*pStudent1).number = 222222222;
	(*pStudent1).percent = 59.99;
	(*pStudent1).grade = 'F';
	printf("Student 1\n");
	printf("---------\n");
	printf("Number: %d\n", (*pStudent1).number);
	printf("Percent: %.1f\n", (*pStudent1).percent);
	printf("Grade: %c\n", (*pStudent1).grade);

	// free memory
	free(pStudent1);
	pStudent1 = NULL;

	return (EXIT_SUCCESS);
}

