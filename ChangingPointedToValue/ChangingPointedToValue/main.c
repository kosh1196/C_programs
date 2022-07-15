/*
* File:   main.c
* Author: Dr. T
*/

#include <stdio.h>
#include <stdlib.h>

/*
* Demonstrates changing the pointed to value
*/
int main(int argc, char** argv)
{
	// declare and initialize variables
	int score = 500;
	int* pScore = &score;

	// display score value
	printf("Score: %d\n", score);

	// change score through pointer
	*pScore += 100;

	// display score value
	printf("Score: %d\n", score);

	return (EXIT_SUCCESS);
}

