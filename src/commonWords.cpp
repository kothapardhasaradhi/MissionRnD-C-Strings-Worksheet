/*
OVERVIEW: Given two strings, find the words that are common to both the strings.
E.g.: Input: "one two three", "two three five".  Output: "two", "three".

INPUTS: Two strings.

OUTPUT: common words in two given strings, return 2D array of strings.

ERROR CASES: Return NULL for invalid inputs.

NOTES: If there are no common words return NULL.
*/

#include <stdio.h>

#include <malloc.h>

#define SIZE 31

char ** commonWords(char *str1, char *str2) 
{
	if (str1&&str2)
	{
		int i, j = 0, k, t = 0, p, flag = 0, a = 0, b = 0;
		char *s, **ans;
		ans = (char **)malloc(sizeof(char)*SIZE);
		s = (char*)malloc(sizeof(char)* 100);
		for (i = 0; str1[j] != '\0'; i++)
		{
			t = 0;
			for (; str1[j] != ' '&&str1[j] != '\0'; j++)
			{
				s = (char*)realloc(s, t + 1);
				s[t++] = str1[j];
			}
			s[t] = '\0';
			for (j = j + 1; str1[j] == ' '; j++)
			{

			}
			for (k = 0, p = 0; str2[k] != '\0'; k++)
			{
				ans[a] = (char*)malloc(sizeof(char)*SIZE);
				if (s[p] == str2[k])
				{
					p++; k++;
					for (; s[p] != '\0'; p++, k++)
					{
						if (s[p] == str2[k])
						{

							flag = 1;
						}
						else
						{
							flag = 0;
							break;
						}

					}
					if (flag == 1)
					{
						for (b = 0; s[b] != '\0'; b++)
						{
							ans[a][b] = s[b];
						}
						//ans[a] = s;
						ans[a][b] = '\0';
						a++;

						//printf("%s\n",ans[a-1]);     //strng found;
					}
				}
				for (k = k; str2[k] != ' '&&str2[k] != '\0'; k++)
				{

				}

			}

		}
		if (a == 0)
			return NULL;
		ans[a] = '\0';
		return ans;
	}
	else
		return NULL;

}