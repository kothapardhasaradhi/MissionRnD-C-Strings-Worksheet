/*
OVERVIEW: Given a string, reverse all the words not the string.

E.g.: Input: "i like coding". Output: "coding like i"

INPUTS: A string.

OUTPUT: Modify the string according to the logic.

NOTES: Don't create new string.
*/
#include <Stdio.h>
#include <string.h>
void rev(int i, int j, char *input)
{
	int t;
	for (   ; i < j; i++, j--)
	{
		t = input[i];
		input[i] = input[j];
		input[j] = t;
	}
}
void str_words_in_rev(char *input, int len)
{
	int i, j,a,b;
	char t;
	for (i = 0, j = len - 1; i < j; i++, j--)
	{
		t = input[i];
		input[i] = input[j];
		input[j] = t;
	}
	for (i = 0; input[i] != '\0'; i++)
	{
		//a = i;
		for (j = i + 1; input[j] != ' '&&input[j]!= '\0'; j++)
		{

		}
		//reverse string from i to j
		rev(i, j-1, input);
		while (input[j+1] == ' ')
		{
			j++;
		}
		i = j;

	}
}
