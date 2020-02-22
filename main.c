#include <stdio.h>
#include "new_string.h"
#include <string.h>

void new_strcmpTest();
void new_strncmpTest();
void new_strchrTest();

// main used for testing purposes
int main()
{
	new_strcmpTest();
	printf("\n \n \n");
	new_strncmpTest();
	printf("\n \n \n");
	new_strchrTest();
	printf("\n \n \n");

	return 0;
}

void new_strcmpTest()
{
	int result = strcmp("hello", "helloo");
	int result2 = new_strcmp("hello", "helloo");

	int result3 = strcmp("helloo", "hello");
	int result4 = new_strcmp("helloo", "hello");

	int result5 = strcmp("yellow", "hello");
	int result6 = new_strcmp("yellow", "hello");

	int result7 = strcmp("hello", "helpo");
	int result8 = new_strcmp("hello", "helpo");

	int result9 = strcmp("hello", "");
	int result10 = new_strcmp("hello", "");

	int result11 = strcmp("", "hello");
	int result12 = new_strcmp("", "hello");

	int result13 = strcmp("truck", "pillow");
	int result14 = new_strcmp("truck", "pillow");

	int result15 = strcmp("truck", "truck");
	int result16 = new_strcmp("truck", "truck");

	printf("new_strcmp Testing\n");
	printf("String library: %d \t My library: %d\n", result, result2);
	printf("String library: %d \t My library: %d\n", result3, result4);
	printf("String library: %d \t My library: %d\n", result5, result6);
	printf("String library: %d \t My library: %d\n", result7, result8);
	printf("String library: %d \t My library: %d\n", result9, result10);
	printf("String library: %d \t My library: %d\n", result11, result12);
	printf("String library: %d \t My library: %d\n", result13, result14);
	printf("String library: %d \t My library: %d\n", result15, result16);
}

void new_strncmpTest()
{
	int result = strncmp("hello", "helloo", 5);
	int result2 = new_strncmp("hello", "helloo", 5);

	int result3 = strncmp("helloo", "hello", 6);
	int result4 = new_strncmp("helloo", "hello", 6);

	int result5 = strncmp("yellow", "hello", 7);
	int result6 = new_strncmp("yellow", "hello", 7);

	int result7 = strncmp("hello", "helpo", 3);
	int result8 = new_strncmp("hello", "helpo", 3);

	int result9 = strncmp("hello", "", 5);
	int result10 = new_strncmp("hello", "", 5);

	int result11 = strncmp("", "hello", 5);
	int result12 = new_strncmp("", "hello", 5);

	int result13 = strncmp("truck", "pillow", 10);
	int result14 = new_strncmp("truck", "pillow", 10);

	int result15 = strncmp("truck", "truck", 9);
	int result16 = new_strncmp("truck", "truck", 9);

	printf("new_strncmp Testing\n");
	printf("String library: %d \t My library: %d\n", result, result2);
	printf("String library: %d \t My library: %d\n", result3, result4);
	printf("String library: %d \t My library: %d\n", result5, result6);
	printf("String library: %d \t My library: %d\n", result7, result8);
	printf("String library: %d \t My library: %d\n", result9, result10);
	printf("String library: %d \t My library: %d\n", result11, result12);
	printf("String library: %d \t My library: %d\n", result13, result14);
	printf("String library: %d \t My library: %d\n", result15, result16);
}

void new_strchrTest()
{
	char* result = strchr("hello there", 'r');
	char* result2 = new_strchr("hello there", 'r');

	char* result3 = strchr("john smith", 's');
	char* result4 = new_strchr("john smith", 's');

	char* result5 = strchr("John Smith", 'S');
	char* result6 = new_strchr("John Smith", 'S');

	char* result7 = strchr("John Smith", 's');
	char* result8 = new_strchr("John Smith", 's');

	char* result9 = strchr("dinosaur", 'z');
	char* result10 = new_strchr("dinosaur", 'z');

	char* result11 = strchr("mango's controller", '\'');
	char* result12 = new_strchr("mango's controller", '\'');

	char* result13 = strchr(" ", ' ');
	char* result14 = new_strchr(" ", ' ');

	char* result15 = strchr("\0", '\0');
	char* result16 = new_strchr("\0", '\0');

	printf("new_strchr Testing\n");
	printf("String library: %c \t My library: %c\n", result, result2);
	printf("String library: %c \t My library: %c\n", result3, result4);
	printf("String library: %c \t My library: %c\n", result5, result6);
	printf("String library: %c \t My library: %c\n", result7, result8);
	printf("String library: %c \t My library: %c\n", result9, result10);
	printf("String library: %c \t My library: %c\n", result11, result12);
	printf("String library: %c \t My library: %c\n", result13, result14);
	printf("String library: %c \t My library: %c\n", result15, result16);
}
