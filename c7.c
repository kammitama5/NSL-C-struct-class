#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Structs and Dynamic Memory based on user input

struct Person
{
	char name[50];
	int age;
};

void getPersonDetails(struct Person * thePerson);
int main(int argc, char * args[])
{
	struct Person p1;
	char * n1 = "Jeremy";
	
	strcpy(p1.name, n1);
	
	printf("p1's name is %s \r\n", p1.name);
	
	printf("The size of a Person is %lu bytes \r\n", sizeof(struct Person);
	
	return 0;
}

void getPersonDetails(struct Person * thePerson)
{
	char buffer[49];
	int theAge;
	
	printf("What is this person's name?:");
	fgets(buffer, 49, stdin);
	
	strcpy(thePerson->name, buffer);
	thelength = strlen(thePerson->name);
	thePerson->name[thelength-1]
	
	printf("What is %s's age?:", thePerson->name);
	fgets(buffer, 6, stdin);
	
	theAge = atoi(buffer);
	thePerson->age = theAge;
	
}


