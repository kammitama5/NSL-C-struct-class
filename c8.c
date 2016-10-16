#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//also look at memcpy

struct Thing
{
	int value;

};

void setValue(struct Thing a, int newValue);

int main(int argc, char * args[])
{
 struct Thing thisthing;
 setValue(thisthing, 47);
 printf("The value of thing a is %d\r\n", thisthing.value);


}


void setValue(struct Thing a, int newValue)
{
 a.value = newValue;
 printf("the value of Thing a is %d\r\n", a.value);

}

//prints the Value of Thing a is 47
//prints the value of thing a is --> memory address

