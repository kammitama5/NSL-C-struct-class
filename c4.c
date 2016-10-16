#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char * arg[])

{
	char buffer[100];
	
	char * dynBuffer;
	int buffLength;
	
	char * s1 = "hello";
	char * s2 = "nsl";
	
	//takes pointers fill with nulls
	memset(buffer, 0, 100);
	
	printf("%s\r\n", buffer);
	//strcpy (DANGEROUS)
	strcpy (buffer, s1);
	printf("%s\r\n", buffer);
	
	//strncpy is the safe version
	
	//strcat (ALSO VERY DANGEROUS)
	strcat(buffer, s2);
	printf("%s\r\n", buffer);
	
	//strncat is the safe version
	
	buffLength = strlen(s1) + strlen(s2)+1;
	dynBuffer = char * )malloc(buffLength*sizeof(char));
	
	//how to tell if allocation passed or failed?
	if (dynBuffer == NULL) {printf("malloc failed\r\n"); exit(1);}
	strcpy(dynBuffer, s2);
	strcat(dynBuffer, s1);
	printf("%s\r\n", dynBuffer);
	
	free(dynBuffer);
	
	return 0;
}