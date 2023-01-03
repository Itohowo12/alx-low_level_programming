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
alx-low_level_programming/0x07-pointers_arrays_strings/5-strstr.c
@Sirtuns4real
Sirtuns4real Task 5
 1 contributor
45 lines (36 sloc)  849 Bytes
#include "main.h"
#define NULL 0

/**
* _strstr - locate and return pointer to first occurence of substring
* @haystack: string to search
* @needle: target substring to search for
* Return: pointer to index of string at first occurence of whole substring
*/
char *_strstr(char *haystack, char *needle)
{
	int i = 0, j, x;

	if (needle[0] == '\0')
		return (haystack);

	while (haystack[i] != '\0') /* iterate through haystack */
	{
		/* if a byte matches first char of needle */
		/* interate through needle until match ends */

		if (haystack[i] == needle[0])
		{
			x = i, j = 0;

			while (needle[j] != '\0')
			{
				if (haystack[x] == needle[j])
				x++, j++;

				else
				break;
			} /* if matched throughout, return haystack */

			if (needle[j] == '\0')
			{
				return (haystack + i);
			}
		}

		i++;
	}

	return (NULL); /* No match */
}
