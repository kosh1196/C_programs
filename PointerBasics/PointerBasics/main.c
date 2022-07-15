/*
* File:   main.c
* Author: Dr. T
*/

#include <stdio.h>
#include <stdlib.h>

/*
* Demonstrates pointer basics
*/
int main(int argc, char** argv)
{
	// declare variable and display information
	int score = 500;
	printf("Score value:   %d\n", score);
	printf("Score address: %p\n", &score);
	printf("Size of score: %d\n\n", sizeof(score));

	// declare pointer and display information
	int* pScore = &score;
	printf("Score pointer value: %p\n", pScore);
	printf("Score value:         %d\n", *pScore);

	return (EXIT_SUCCESS);
}

