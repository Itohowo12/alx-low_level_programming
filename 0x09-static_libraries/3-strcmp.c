
Sign up
Sirtuns4real
/
alx-low_level_programming
Public
Code
Issues
Pull requests
Actions
Projects
Security
Insights
alx-low_level_programming/0x09-static_libraries/3-strcmp.c
@Sirtuns4real
Sirtuns4real Task 1
 1 contributor
23 lines (21 sloc)  483 Bytes
#include "main.h"
/**
 * _strcmp - compares two strings
 * @s1: Pointer to first string
 * @s2: Pointer to second string
 *
 * Return: Value less than 0 if string is less than the other
 * Value greater than 0 if string is greater then the other
 * 0 if strings are equal
 */
int _strcmp(char *s1, char *s2)
{
	int counter, cmpVal;

	counter = 0;
	while (s1[counter] == s2[counter] && s1[counter] != '\0')
	{
		counter++;
	}

	cmpVal = s1[counter] - s2[counter];
	return (cmpVal);
}
