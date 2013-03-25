#include "util.h"
	
int last_index(char* s, char c)
{
	int i, result = 0;
	for(i = 0; s[i]; i++)
		if(s[i] == c)
			result = i;
	return result;
}

char *escape_path(char *str, char *new_str, bool skip_first)
{
	int i, j;
	int first = skip_first ? strstr(str, " ") - str : -1;
	for (i = 0, j = 0; str[i]; i++, j++) {
		if (i > first && str[i] == ' ')
			new_str[j++] = '\\';
		new_str[j] = str[i];
	}
}
