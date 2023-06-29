#include <stdio.h>
#include<main.h>

/**
 * char *leet(char *) -  encodes a string into 1337
 * retur: st
 */
char *leet(char *str)
{
	int i, j;
	char *leet_chars = "aAeEoOtTlL";
	char *leet_nums = "43071";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; leet_chars[j] != '\0'; j++)
	{
		if (str[i] == leet_chars[j])
		{
			str[i] = leet_nums[j / 2];
			break
		}
	}
	}
return (str);
}
