#include <stdio.h>

/***************
* Jeff & Matt 
****************/
char* new_strcpy(char* destination, const char* source);

//test main()
//int main(){
	
	//char test[20] = "Cat and wombats";
	//char testEmpt[10];
	//new_strcpy(testEmpt, test);
	//printf("%s", testEmpt);
	//return 0;

//}


char* new_strcpy(char* destination, const char* source){

	
	//begining of string
	char *startSpot = destination;

	while (*source != '\0'){
		
		//first peice of free memory = first char in desired string
		*destination = *source;

		//walk it up the string/memory appropriately
		destination++;
		source++;

	}//end while


	// indicates end of string
	*destination = '\0';

	//first peice of memory where string starts
	return startSpot;

}//end new_strcpy
