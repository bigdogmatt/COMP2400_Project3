#include "new_string.h"

//Copies the characters from source into destination.
char* new_strcpy(char* destination, const char* source)
{
	char* pointer = destination;
	/**********
	while loop that runs while the value at the location of the source pointer
	is not equal to the null character. The item in source is copied to the
	location that pointer is pointing at. Pointer and source are then moved
	to the next location in memory
	**********/
	while (*source != '\0')
	{
		*pointer = *source;
		++pointer;
		++source;
	}
	*pointer = '\0'; //Add the null character at the end of the string
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
	/**********
	For loop that runs n times. The character in source is copied to the
	location that pointer is pointing at unless the value in source is a null
	character. In this case, we fill the rest of the n characters that need to
	be copied to destination with null characters.
	**********/
	for(int i = 0; i < n; ++i)
	{
		if(*source == '\0')
		{
			*pointer = '\0';
		}
		else
		{
			*pointer = *source;
			++source;
		}
		++pointer;
	}
	return destination;
}

/*
Compares two strings. The return value is positive if string1 comes after
string2 alphabetically, negative if string1 comes before string2 alphabetically,
and 0 if the two strings are equal.
*/
int new_strcmp(const char* string1, const char* string2)
{
	/**********
	While loop that runs while the character that string1 is pointing to is
	not null and while the character that string1 is pointing to is equal to
	the character that string2 is pointing to. When the loop ends, we return
	the difference between the characters that string1 and string2 are pointing
	to.
	**********/
	while(*string1 != '\0' && *string1 == *string2)
	{
		++string1;
		++string2;
	}

	const char c1 = *string1;
	const char c2 = *string2;
	return c1 - c2;
}

/*
Compares two strings exactly like new_strcmp(), except comparing at most the
first n characters.
*/
int new_strncmp(const char* string1, const char* string2, size_t n)
{
	size_t counter = 0;
	/**********
	While loop that runs while counter is less than n and the character that
	string1 is pointing to is equal to the character that string2 is pointing
	to. When the loop ends, if counter equals n then we got through the loop
	without encountering a difference in string1 and string2 so we return 0.
	Otherwise, there is a difference and we return the difference.
	**********/
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

	const char c1 = *string1;
	const char c2 = *string2;
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

	/**********
	While loop that runs while the character that pointer is pointing to is
	not null. When the loop ends, pointer is pointing at the null character.
	From here we call new_strcopy() to add source to the end of destination.
	**********/
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

	/**********
	While loop that runs while the character that pointer is pointing to is
	not null. When the loop ends, pointer is pointing at the null character at
	the end of destination. If we call new_strncpy(), if n is bigger than the
	length of source, then null characters will be added to the end. We do not
	want this so instead we copy over n characters from source then null
	terminate the string.
	**********/
	while (*pointer != '\0')
	{
		pointer++;
	}

	*pointer = *source;

	while (counter < n && *pointer != '\0')
	{
		++counter;
		++pointer;
		++source;
		*pointer = *source;
	}

	*pointer = '\0';
	return destination;
}

//Returns the number of characters in string before the null character.
size_t new_strlen(const char* string)
{
	size_t counter = 0;
	/**********
	While loop that runs while the character that string is pointing to is
	not null. Adds up the length of the string.
	**********/
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
	/**********
	While loop that runs while the character that string is pointing to is
	not null and while the character is not equal to the character we are
	looking for. When the loop ends, if the character at string is equal to
	the character we are looking for then we return that pointer. Otherwise
	we return null.
	**********/
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
	const char* pointer1 = haystack;
	const char* pointer2 = needle;
	size_t counter = 0;
	/**********
	Length varaible becuase we dont need to check every character. If the length
	if needle is the same as haystack then we only need to check starting with
	the first character. If these dont match then there is no way to find needle
	in haystack.
	**********/
	size_t length = (new_strlen(haystack) - new_strlen(needle) + 1);
	/**********
	While loop that runs while the counter is less than length and while the
	character that pointer is pointing to is not the null character. If
	the character at pointer1 is equal to the character at pointer2 then we
	check the next characters to see if we can find needle. If at any point
	the characters at temp1 and temp2 dont match, the inner while loop ends and
	we move to the next character and start again. If the inner while loop ends
	and temp2 is pointed at the terminating null, we found needle and return
	the pointer. 
	**********/
	while(counter < length && (*pointer1 != '\0'))
	{
		if(*pointer1 == *pointer2)
		{
			const char* temp1 = pointer1;
			const char* temp2 = pointer2;
			while(*temp1 == *temp2 && *temp2 != '\0')
			{
				++temp1;
				++temp2;
			}
			if(*temp2 == '\0')
			{
				return (char*)pointer1;
			}
		}
		++pointer1;
		++counter;
	}
	return (char*)NULL;
}
