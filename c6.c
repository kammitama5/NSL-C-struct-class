#include <stdlib.h>
#include <string.h>

//FUNCTION PROTOTYPES
char * addTwoStrings(char * s1, char * s2);
char * extendString(char * s1, char * s2);


int main(int argc, char * args[])
{
	char * a = "what's";
	char * b = "up?";
	char * c = "buttercup";
	
	char * result;
	char * newHolder;
	
	result = addTwoStrings(a, b);
	printf("before free:\r\n");
	
	printf("%s\r\n", result);
	
	printf("%s\r\n", newHolder);
	printf("%s\r\n", result);
	free(result);
	
	//result and newHolder say same thing => Hello buttercup
	
	//printf("after free:\r\n");
	//printf("%s\r\n", newHolder);
	//printf("%s\r\n", result);
	//dumps core
	
	return 0;
	
}

char * extendString(char * s1, char * s2)
{
	//let's try to reallocate
	
	int newlength;
	char * newPtr;
	newlength = strlen(s1) + strlen(s2) + 1;
	newPtr = realloc(s1, newlength);
	if(!newPtr){return NULL;}
	
	strcat(new)
	
}

char * addTwoStrings(char * s1, char * s2)

{
	
	char * result;
	int thelength;
	thelength = strlen(s1) + strlen(s2) + 1;
	
	//after calloc everything is set to zero, but slower than malloc
	// result = (char *)calloc(thelength, sizeof(char)); => useful working with  structs
	
	result = (char *)malloc(thelength* sizeof(char));
	if(!result){return NULL;}
	strcpy(result, s1);
	strcpy(result, s2);
	
	return result;
	
	
}