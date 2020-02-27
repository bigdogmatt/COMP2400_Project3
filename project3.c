#include <stddef.h>

char* new_strcpy(char* destination, const char* source);
char* new_strncpy(char* destination, const char* source, size_t n);
int new_strcmp(const char* string1, const char* string2);
int new_strncmp(const char* string1, const char* string2, size_t n);
char* new_strcat(char* destination, const char* source);
char* new_strncat(char* destination, const char* source, size_t n);
size_t new_strlen(const char* string);
char* new_strchr(const char* string, int character);
char* new_strstr(const char* haystack, const char* needle);

//Copies the characters from source into destination.
char* new_strcpy(char* destination, const char* source)
{
	char* pointer = destination;
	while (*source != '\0')
	{
		//first peice of free memory = first char in desired string
		*pointer = *source;
		//walk it up the string/memory appropriately
		++pointer;
		++source;

	}
	// indicates end of string
	*pointer = '\0';

	//first peice of memory where string starts
	return destination;
}

/*
Copies the first n characters from source into destination. If the function
hits a null character in source before it has copied n characters, the remaining
characters are filled with null characters.
*/
char* new_strncpy(char* destination, const char* source, size_t n)
{
	char* pointer = destination;
	for(int i = 0; i < n; ++i)
	{
		if(*source == '\0')
		{
			*pointer = '\0';
		}
		else
		{
			//first peice of free memory = first char in desired string
			*pointer = *source;
		}
		//walk it up the string/memory appropriately
		++pointer;
		++source;
	}
	*pointer = '\0';

	//first peice of memory where string starts
	return destination;

}

/*
Compares two strings. The return value is positive if string1 comes after
string2 alphabetically, negative if string1 comes before string2 alphabetically,
and 0 if the two strings are equal.
*/
int new_strcmp(const char* string1, const char* string2)
{
	unsigned char c1;
	unsigned char c2;

	while(*string1 != '\0' && *string1 == *string2)
	{
		++string1;
		++string2;
	}

	c1 = (unsigned char)*string1;
	c2 = (unsigned char)*string2;
	return c1 - c2;
}

/*
Compares two strings exactly like new_strcmp(), except comparing at most the
first n characters.
*/
int new_strncmp(const char* string1, const char* string2, size_t n)
{
	unsigned char c1;
	unsigned char c2;
	size_t counter = 0;

	while(counter < n && *string1 == *string2)
	{
		if(*string1 == '\0')
		{
			return 0;
		}
		++string1;
		++string2;
		++counter;
	}

	if(counter == n)
	{
		return 0;
	}

	c1 = (unsigned char)*string1;
	c2 = (unsigned char)*string2;
	return c1 - c2;
}

/*
Adds the string contained in source to the end of the string contained in
destination. The values in destination are modified, but a pointer to
destination is also returned.
*/
char* new_strcat(char* destination, const char* source)
{
	char* pointer = destination;

	while (*pointer != '\0')
	{
		++pointer;
	}

	new_strcpy(pointer, source);
	return destination;
}

/*
Adds the string contained in source to the end of the string contained in
destination, but adding a maximum of n characters.
*/
char* new_strncat(char* destination, const char* source, size_t n)
{
	size_t counter = 0;
	char* pointer = destination;

	while (*pointer != '\0')
	{
		pointer++;
	}

	*pointer = *source;

	while (counter < n && *pointer != '\0')
	{
		++counter;
		++pointer;
		*pointer = *(++source);
	}

	*pointer = '\0';
	return destination;
}

//Returns the number of characters in string before the null character.
size_t new_strlen(const char* string)
{
	size_t counter = 0;
	while(string[counter] != '\0')
	{
		++counter;
	}
	return counter;
}

/*
Returns a pointer to the first occurrence of character in string or a NULL
pointer if character cannot be found.
*/
char* new_strchr(const char* string, int character)
{
	while(*string != '\0' && *string != character)
	{
		++string;
	}

	if(*string == character)
	{
		return (char*)string;
	}
	return NULL;
}

/*
Returns a pointer to the first occurrence of the string contained in needle in
haystack or a NULL pointer if needle cannot be found.
*/
char* new_strstr(const char* haystack, const char* needle)
{
	char* pointer1 = haystack;
	char* pointer2 = needle;
	size_t counter = 0;
	while(counter < (new_strlen(haystack) - new_strlen(needle) + 1) && (*pointer1 != '\0'))
	{
		if(*pointer1 == *pointer2)
		{
			char* temp1 = pointer1;
			char* temp2 = pointer2;
			while(*temp1 == *temp2 && *temp2 != '\0')
			{
				++temp1;
				++temp2;
			}
			if(*temp2 == '\0')
			{
				return pointer1;
			}
		}
		++pointer1;
		++counter;
	}
	return (char*)NULL;
}
