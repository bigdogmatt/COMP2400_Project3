#include <stdio.h>
#include "new_string.h"
#include <string.h>

void new_strcmpTest();
void new_strncmpTest();
void new_strchrTest();
void new_strcatTest();
void new_strncatTest();

// main used for testing purposes
int main()
{
	new_strcmpTest();
	printf("\n \n \n");
	new_strncmpTest();
	printf("\n \n \n");
	new_strchrTest();
	printf("\n \n \n");
	new_strcatTest();
	printf("\n \n \n");
	new_strncatTest();
	printf("\n \n \n");
	new_

	return 0;
}

void new_strcmpTest()
{
	char libTest[100] = "This is a test of the c library";
	char myTest[100] = "My mother is an alien";

	int result = strcmp(libTest, myTest);
	int result2 = new_strcmp(libTest, myTest);

	// int result = strcmp("hello", "helloo");
	// int result2 = new_strcmp("hello", "helloo");

	int result3 = strcmp("helloo", "hellooo");
	int result4 = new_strcmp("helloo", "hellooo");

	int result5 = strcmp("yellow", "hello");
	int result6 = new_strcmp("yellow", "hello");

	int result7 = strcmp("hello", "helpo");
	int result8 = new_strcmp("hello", "helpo");

	int result9 = strcmp("hello", "");
	int result10 = new_strcmp("hello", "");

	int result11 = strcmp("Hello", "hello");
	int result12 = new_strcmp("Hello", "hello");

	int result13 = strcmp("truck", "pillow");
	int result14 = new_strcmp("truck", "pillow");

	int result15 = strcmp("truck", "truck");
	int result16 = new_strcmp("truck", "truck");

	printf("***************new_strcmp Testing***************\n");
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

	int result13 = strncmp("truck", "pillowings", 10);
	int result14 = new_strncmp("truck", "pillowings", 10);

	int result15 = strncmp("truck", "truck", 9);
	int result16 = new_strncmp("truck", "truck", 9);

	printf("***************new_strncmp Testing***************\n");
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

	printf("***************new_strchr Testing***************\n");
	printf("String library: %s \t My library: %s\n", result, result2);
	printf("String library: %s \t My library: %s\n", result3, result4);
	printf("String library: %s \t My library: %s\n", result5, result6);
	printf("String library: %s \t My library: %s\n", result7, result8);
	printf("String library: %s \t My library: %s\n", result9, result10);
	printf("String library: %s \t My library: %s\n", result11, result12);
	printf("String library: %s \t My library: %s\n", result13, result14);
	printf("String library: %s \t My library: %s\n", result15, result16);
}

void new_strcatTest()
{
	char destination1[100];
	char destination2[100];
	const char* destination = "wom";
	const char* source = "bats";
	const char* source2 = " are animals";
	const char* source3 = " that have";
	const char* source4 = " brown fur";
	strcpy(destination1, destination);
	strcpy(destination2, destination);
	char* result = strcat(destination1, source);
	char* result2 = new_strcat(destination2, source);

	char* result3 = strcat(destination1, source2);
	char* result4 = new_strcat(destination2, source2);

	char* result5 = strcat(destination1, source3);
	char* result6 = new_strcat(destination2, source3);

	char* result7 = strcat(destination1, source4);
	char* result8 = new_strcat(destination2, source4);


	printf("***************new_strcat Testing***************\n");
	printf("String library: %s \t \nMy library: %s\n", destination1, destination2);
}

void new_strncatTest()
{
	char destination1[100];
	char destination2[100];
	const char* destination = "wom";
	const char* source = "bats aren't animals";
	const char* source2 = " are animals";
	const char* source3 = " that have green fur";
	const char* source4 = " brown fur and wear glasses";
	strcpy(destination1, destination);
	strcpy(destination2, destination);

	char* result = strncat(destination1, source, 4);
	char* result2 = new_strncat(destination2, source, 4);

	char* result3 = strncat(destination1, source2, 20);
	char* result4 = new_strncat(destination2, source2, 20);

	char* result5 = strncat(destination1, source3, 10);
	char* result6 = new_strncat(destination2, source3, 10);

	char* result7 = strncat(destination1, source4, 10);
	char* result8 = new_strncat(destination2, source4, 10);


	printf("***************new_strncat Testing***************\n");
	printf("String library: %s \t \nMy library: %s\n", destination1, destination2);
}

void new_strncopyTest(){

	int result = strncopy("", "cats and womats", 3);
	int result2 = new_strncopy("", "cats and womats", 3);

	int result3 = strncopy("", "hello", 6);
	int result4 = new_strncopy("", "hello", 6);

	int result5 = strncopy("", "hello", 7);
	int result6 = new_strncopy("", "hello", 7);

	int result7 = strncopy("", "helpo", 3);
	int result8 = new_strncopy("", "helpo", 3);

	int result9 = strncopy("", "big ol sentence with more than a few words", 8);
	int result10 = new_strncopy("", "big ol sentence with more than a few words", 8);

	int result11 = strncopy("", "small", 5);
	int result12 = new_strncopy("", "small", 5);

	int result13 = strncopy("", "pillowings", 3);
	int result14 = new_strncopy("", "pillowings", 3);

	int result15 = strncopy("", "truck", 9);
	int result16 = new_strncopy("", "truck", 9);

	printf("***************new_strncopy Testing***************\n");
	printf("String library: %d \t My library: %d\n", result, result2);
	printf("String library: %d \t My library: %d\n", result3, result4);
	printf("String library: %d \t My library: %d\n", result5, result6);
	printf("String library: %d \t My library: %d\n", result7, result8);
	printf("String library: %d \t My library: %d\n", result9, result10);
	printf("String library: %d \t My library: %d\n", result11, result12);
	printf("String library: %d \t My library: %d\n", result13, result14);
	printf("String library: %d \t My library: %d\n", result15, result16);

}





void new_strcopyTest(){

	int result = strcopy("", "cats and womats);
	int result2 = new_strcopy("", "cats and womats");

	int result3 = strcopy("", "hello");
	int result4 = new_strcopy("", "hello");

	int result5 = strcopy("", "hello");
	int result6 = new_strcopy("", "hello");

	int result7 = strcopy("", "helpo");
	int result8 = new_strcopy("", "helpo");

	int result9 = strcopy("", "big ol sentence with more than a few words");
	int result10 = new_strcopy("", "big ol sentence with more than a few words");

	int result11 = strcopy("", "small");
	int result12 = new_strcopy("", "small");

	int result13 = strcopy("", "pillowings");
	int result14 = new_strcopy("", "pillowings");

	int result15 = strcopy("", "truck");
	int result16 = new_strcopy("", "truck");

	printf("***************new_strcopy Testing***************\n");
	printf("String library: %d \t My library: %d\n", result, result2);
	printf("String library: %d \t My library: %d\n", result3, result4);
	printf("String library: %d \t My library: %d\n", result5, result6);
	printf("String library: %d \t My library: %d\n", result7, result8);
	printf("String library: %d \t My library: %d\n", result9, result10);
	printf("String library: %d \t My library: %d\n", result11, result12);
	printf("String library: %d \t My library: %d\n", result13, result14);
	printf("String library: %d \t My library: %d\n", result15, result16);


}
