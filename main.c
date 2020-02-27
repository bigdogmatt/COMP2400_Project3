#include <stdio.h>
#include "new_string.h"
#include <string.h>

void new_strcpyTest();
void new_strncpyTest();
void new_strcmpTest();
void new_strncmpTest();
void new_strchrTest();
void new_strcatTest();
void new_strncatTest();
void new_strstrTest();


// main used for testing purposes
int main()
{
	printf("\n \n \n");
	new_strcpyTest();
	printf("\n \n \n");
	new_strncpyTest();
	printf("\n \n \n");
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
	new_strstrTest();
	printf("\n \n \n");

	return 0;
}

void new_strcpyTest()
{
	char destination1[100];
	char destination2[100];
	char destination3[100];
	char destination4[100];
	char destination5[100];
	char destination6[100];

	char source1[] = "Hello";
	char source2[] = "Wombat";
	char source3[] = "Milky way";
	char source4[] = "The brown dog jumped over the rock.";
	char source5[] = " ";
	char source6[] = "\0";

	char* result1 = strcpy(destination1, source1);
	char* result2 = new_strcpy(destination1, source1);

	char* result3 = strcpy(destination2, source2);
	char* result4 = new_strcpy(destination2, source2);

	char* result5 = strcpy(destination3, source3);
	char* result6 = new_strcpy(destination3, source3);

	char* result7 = strcpy(destination4, source4);
	char* result8 = new_strcpy(destination4, source4);

	char* result9 = strcpy(destination5, source5);
	char* result10 = new_strcpy(destination5, source5);

	char* result11 = strcpy(destination6, source6);
	char* result12 = new_strcpy(destination6, source6);

	printf("***************new_strcpy Testing***************\n");
	printf("String library: %s \t My library: %s\n", result1, result2);
	printf("String library: %s \t My library: %s\n", result3, result4);
	printf("String library: %s \t My library: %s\n", result5, result6);
	printf("String library: %s \t My library: %s\n", result7, result8);
	printf("String library: %s \t My library: %s\n", result9, result10);
	printf("String library: %s \t My library: %s\n", result11, result12);
}

void new_strncpyTest()
{
	char destination1[100];
	char destination2[100];
	char destination3[100];
	char destination4[100];
	char destination5[100];
	char destination6[100];

	char source1[] = "Hello";
	char source2[] = "Wombat";
	char source3[] = "Milky way";
	char source4[] = "The brown dog jumped over the rock.";
	char source5[] = " ";
	char source6[] = "\0";

	char* result1 = strncpy(destination1, source1, 4);
	char* result2 = new_strncpy(destination1, source1, 4);

	char* result3 = strncpy(destination2, source2, 9);
	char* result4 = new_strncpy(destination2, source2, 9);

	char* result5 = strncpy(destination3, source3, 7);
	char* result6 = new_strncpy(destination3, source3, 7);

	char* result7 = strncpy(destination4, source4, 0);
	char* result8 = new_strncpy(destination4, source4, 0);

	char* result9 = strncpy(destination5, source5, 10);
	char* result10 = new_strncpy(destination5, source5, 10);

	char* result11 = strncpy(destination6, source6, 5);
	char* result12 = new_strncpy(destination6, source6, 5);

	printf("***************new_strncpy Testing***************\n");
	printf("String library: %s \t My library: %s\n", result1, result2);
	printf("String library: %s \t My library: %s\n", result3, result4);
	printf("String library: %s \t My library: %s\n", result5, result6);
	printf("String library: %s \t My library: %s\n", result7, result8);
	printf("String library: %s \t My library: %s\n", result9, result10);
	printf("String library: %s \t My library: %s\n", result11, result12);
}

void new_strcmpTest()
{
	//1
	char* libTest = "This is a test of the c library";
	char* myTest = "My mother is an alien";

	int result = strcmp(libTest, myTest);
	int result2 = new_strcmp(libTest, myTest);

	//2
	int result3 = strcmp("hello my name is matt", "hello my name is mike");
	int result4 = new_strcmp("hello my name is matt", "hello my name is mike");

	//3
	char* word1 = "yellow";
	char* word2 = "hello";

	int result5 = strcmp(word1, word2);
	int result6 = new_strcmp(word1, word2);

	//4
	int result7 = strcmp("hello", "helpo");
	int result8 = new_strcmp("hello", "helpo");

	//5
	int result9 = strcmp("hello", "");
	int result10 = new_strcmp("hello", "");

	//6
	int result11 = strcmp("Hello", "hello");
	int result12 = new_strcmp("Hello", "hello");

	//7
	int result13 = strcmp("truck", "pillow");
	int result14 = new_strcmp("truck", "pillow");

	//8
	int result15 = strcmp("truck", "truck");
	int result16 = new_strcmp("truck", "truck");

	printf("***************new_strcmp Testing***************\n");
	printf("1. String library: %d \t My library: %d\n", result, result2);
	printf("2. String library: %d \t My library: %d\n", result3, result4);
	printf("3. String library: %d \t My library: %d\n", result5, result6);
	printf("4. String library: %d \t My library: %d\n", result7, result8);
	printf("5. String library: %d \t My library: %d\n", result9, result10);
	printf("6. String library: %d \t My library: %d\n", result11, result12);
	printf("7. String library: %d \t My library: %d\n", result13, result14);
	printf("8. String library: %d \t My library: %d\n", result15, result16);
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

void new_strstrTest()
{
	char* result = strstr("hello there", "llo th");
	char* result2 = new_strstr("hello there", "llo th");

	char* result3 = strstr("my name is matt", "my name is nat");
	char* result4 = new_strstr("my name is matt", "my name is nat");

	char* result5 = strstr("Buffalo Sabre", "Ryan O'Reilly");
	char* result6 = new_strstr("Buffalo Sabre", "Ryan O'Reilly");

	char* result7 = strstr("my name is matt", "my name is matt");
	char* result8 = new_strstr("my name is matt", "my name is matt");

	char* result9 = strstr("teacher teach tea", "ac");
	char* result10 = new_strstr("teacher teach tea", "ac");

	printf("***************new_strstr Testing***************\n");
	printf("String library: %s \t \nMy library: %s\n", result, result2);
	printf("String library: %s \t \nMy library: %s\n", result3, result4);
	printf("String library: %s \t \nMy library: %s\n", result5, result6);
	printf("String library: %s \t \nMy library: %s\n", result7, result8);
	printf("String library: %s \t \nMy library: %s\n", result9, result10);


}
