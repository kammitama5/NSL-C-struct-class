#include <stdio.h>

int main (int argc, char * arg[])

{
	char letter1 = 'a';
	
	char * ptr1 = &letter1;
	
	printf("letter 1 is %c \r\n", letter1);
	
	// letter 1 is a
	
	printf("ptr1 is %p \r\n", ptr1);
	
	//ptr is address
	
	printf("the value at ptr1 is %c \r\n", * ptr1);
	
	//the value at ptr1 is a
	
	return 0;
}