#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "revert_string.h"

void RevertString(char *str)
{
	// your code here
	size_t len_str = 0;
	for(size_t i=0; str[i] != '\0'; ++i){
		++len_str;
	}

	char * str_copy = malloc(sizeof(char) * (len_str + 1));
	strcpy(str_copy, str);
	for(size_t i=0; i < len_str; ++i){
		str[i] = str_copy[len_str - i - 1];
	}
	str[len_str] = '\0';
}

