#include <stddef.h>

#include <string.h>

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

}

/*
Copies the first n characters from source into destination. If the function
hits a null character in source before it has copied n characters, the remaining
characters are filled with null characters.
*/
char* new_strncpy(char* destination, const char* source, size_t n)
{

}

/*
Compares two strings. The return value is positive if string1 comes after
string2 alphabetically, negative if string1 comes before string2 alphabetically,
and 0 if the two strings are equal.
*/
int new_strcmp(const char* string1, const char* string2)
{
	size_t length1 = new_strlen(string1);
	size_t length2 = new_strlen(string2);
	char str1[length1 + 1];
	char str2[length2 + 1];
	strcpy(str1, string1); //CHANGE THIS ONCE new_strcpy IS FINISHED
	strcpy(str2, string2); //CHANGE THIS ONCE new_strcpy IS FINISHED
	int count = 0;
	char c1;
	char c2;

	while((c1 = str1[count]) != '\0' && (c2 = str2[count]) != '\0')
	{
		if(c1 >= 'A' && c1 <= 'Z')
		{
			c1 += ('A' - 'a');
		}
		if(c2 >= 'A' && c2 <= 'Z')
		{
			c2 += ('A' - 'a');
		}

		if(c1 > c2)
		{
			return 1;
		}
		else if(c1 < c2)
		{
			return -1;
		}
		++count;
	}

	if(length1 > length2)
	{
		return 1;
	}
	else if(length1 < length2)
	{
		return -1;
	}
	return 0;
}

/*
Compares two strings exactly like new_strcmp(), except comparing at most the
first n characters.
*/
int new_strncmp(const char* string1, const char* string2, size_t n)
{
	size_t length1 = new_strlen(string1);
	size_t length2 = new_strlen(string2);
	char str1[length1 + 1];
	char str2[length2 + 1];
	strncpy(str1, string1, n); //CHANGE THIS ONCE new_strncpy IS FINISHED
	strncpy(str2, string2, n); //CHANGE THIS ONCE new_strncpy IS FINISHED

	for(size_t i = 0; i < n; ++i)
	{
		if(str1[i] >= 'A' && str1[i] <= 'Z')
		{
			str1[i] += ('A' - 'a');
		}
		if(str2[i] >= 'A' && str2[i] <= 'Z')
		{
			str2[i] += ('A' - 'a');
		}

		if(str1[i] > str2[i])
		{
			return 1;
		}
		else if(str1[i] < str2[i])
		{
			return -1;
		}
	}
	return 0;
}

/*
Adds the string contained in source to the end of the string contained in
destination. The values in destination are modified, but a pointer to
destination is also returned.
*/
char* new_strcat(char* destination, const char* source)
{

}

/*
Adds the string contained in source to the end of the string contained in
destination, but adding a maximum of n characters.
*/
char* new_strncat(char* destination, const char* source, size_t n)
{

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
	char* c;
	for(size_t i = 0; i <= new_strlen(string); ++i)
	{
		c = &string[i];
		if(*c == character)
		{
			return c;
		}
	}
	return NULL;
}

/*
Returns a pointer to the first occurrence of the string contained in needle in
haystack or a NULL pointer if needle cannot be found.
*/
char* new_strstr(const char* haystack, const char* needle)
{

}
