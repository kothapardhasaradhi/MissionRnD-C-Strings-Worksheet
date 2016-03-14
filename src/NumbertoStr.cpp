/*
OVERVIEW: Given a float number ,Convert it into a string 

INPUTS: A Float,Final string ,How many digits after decimal has to be displayed .
Its zero for integers.


OUTPUT: No need to output anything ,Modify the str in function parameter such that it
now holds the string format of the float number specified

Example : number_to_str(345,str,0);
Should copy "345\0" in the str;
number_to_str(345.342,str,2);
Should copy "345.34" in the str;

NOTES: Don't create new string.

*/


#include <stdio.h>


void number_to_str(float number, char *str, int afterdecimal)
{
	int r, i, j, flag = 0;
	char t;
	for (i = 0; i < afterdecimal; i++)
	{
		number = number * 10;
	}
	if (number < 0)
	{
		number = number*-1;
		flag = -1;
	}
	for (i = 0; (int)number != 0; i++)
	{
		r = (int)number % 10;
		str[i] = r + '0';
		number = number / 10;
		if (afterdecimal == i + 1)
		{
			i++;
			str[i] = '.';
		}
	}
	//str[i] = '\0';
	if (flag == -1)
		str[i] = '-';
	else
		i--;
	for (j = 0; i > j; j++, i--)
	{
		t = str[i];
		str[i] = str[j];
		str[j] = t;
	}
	str[i + j + 1] = '\0';
}