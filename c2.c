#include <stdio.h>

int main (int argc, char * arg[])

{
	char letter1 = 'a';
	int somenumber = 234;
	long alongnumber = 123412341234;
	float afloat = 1234.23423;
	
	char * ptr1 = &letter1;
	int * numptr = &somenumber;
	long * longptr = &alongnumber;
	float * floatptr = & afloat;
	
	void * vptr = &longptr;
	
	
	printf("letter 1 is %c \r\n", letter1);
	
	// letter 1 is a
	
	printf("ptr1 is %p \r\n", ptr1);
	
	//ptr is address
	
	printf("the value at ptr1 is %c \r\n", * ptr1);
	
	
	
	return 0;
}