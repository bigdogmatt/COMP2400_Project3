#include <stdio.h>

/***************
* Jeff & Matt
****************/

char* new_strncpy(char* destination, const char* source, size_t n);


//int main(){

	//char test[20] = "Cats and wombats";
//	char testEmpt[20];
//	new_strncpy(testEmpt, test, 5);
//	printf("%s", testEmpt);
//	printf("%d \n", testEmpt[15]);
//	return 0;
//}

char* new_strncpy(char* destination, const char* source, size_t n){

	//begining of string
	char *startSpot = destination;
	int i = 0;

	while ( (*source != '\0') && (i != n) ){
		
		//first peice of free memory = first char in desired string
		*destination = *source;

		//walk it up the string/memory appropriately
		destination++;
		source++;
		i++;

	}//end while

	

	//finish out the char array with null
	while (*source != '\0'){
		*destination = '\0';
		destination++;
		source++;
		i++;
	}//endwhile


	//first peice of memory where string starts
	return startSpot;


}
