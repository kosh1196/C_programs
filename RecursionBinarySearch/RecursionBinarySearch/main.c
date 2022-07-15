/*
* File:   main.c
* Author: Dr. T
*/

#include <stdio.h>
#include <stdlib.h>

void doEvenBinarySearch();
void doOddBinarySearch();
int binarySearch(int searchValue, int searchArray[], int lowerBound, int upperBound);

/*
* Demonstrates binary search using recursion
*/
int main(int argc, char** argv)
{
	doEvenBinarySearch();
	doOddBinarySearch();

	return (EXIT_SUCCESS);
}

/*
* Performs binary searches of an even-sized array
*/
void doEvenBinarySearch()
{
	int searchArray[] = { 1, 3, 5, 12, 17, 21, 33, 42, 42, 42 };
	int searchArraySize = sizeof(searchArray) / sizeof(searchArray[0]);

	printf("Even array, value in array\n");
	int result = binarySearch(3, searchArray, 0, searchArraySize - 1);
	if (result != -1)
	{
		printf("Found value at %d\n", result);
	}
	else
	{
		printf("Didn't find value\n");
	}
	printf("\n");

	printf("Even array, value not in array\n");
	result = binarySearch(43, searchArray, 0, searchArraySize - 1);
	if (result != -1)
	{
		printf("Found value at %d\n", result);
	}
	else
	{
		printf("Didn't find value\n");
	}
	printf("\n");
}

/*
* Performs binary searches of an odd-sized array
*/
void doOddBinarySearch()
{
	int searchArray[] = { 1, 3, 5, 12, 17, 21, 33, 42, 42, 42, 42 };
	int searchArraySize = sizeof(searchArray) / sizeof(searchArray[0]);

	printf("Odd array, value in array\n");
	int result = binarySearch(3, searchArray, 0, searchArraySize - 1);
	if (result != -1)
	{
		printf("Found value at %d\n", result);
	}
	else
	{
		printf("Didn't find value\n");
	}
	printf("\n");

	printf("Odd array, value not in array\n");
	result = binarySearch(43, searchArray, 0, searchArraySize - 1);
	if (result != -1)
	{
		printf("Found value at %d\n", result);
	}
	else
	{
		printf("Didn't find value\n");
	}
	printf("\n");
}

/*
* Performs a binary search for the given value
*/
int binarySearch(int searchValue, int searchArray[], int lowerBound, int upperBound)
{
	// check exhausted array termination condition
	if (lowerBound > upperBound)
	{
		return -1;
	}

	// check found value termination condition
	int middleLocation = lowerBound + (upperBound - lowerBound) / 2;
	int middleValue = searchArray[middleLocation];
	if (middleValue == searchValue)
	{
		return middleLocation;
	}

	// do recursive call on appropriate part of array
	if (middleValue > searchValue)
	{
		return binarySearch(searchValue, searchArray, lowerBound, middleLocation - 1);
	}
	else
	{
		return binarySearch(searchValue, searchArray, middleLocation + 1, upperBound);
	}
}