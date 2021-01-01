#include <config.h>
#include <stdio.h>
#include <stdlib.h>

int main (void) {
	puts ("Hello world from " PACKAGE_STRING);

	FILE *file_pointer; 
	char c;
	char * file_name = DATADIR "/text/blah.txt";
	puts ("File name: ");
	puts(file_name);
	file_pointer = fopen(file_name, "r"); 
	if (file_pointer == NULL) 
	{ 
		printf("Cannot open file \n"); 
		exit(1); 
	} 
  
	c = fgetc(file_pointer); 
	while (c != EOF) 
	{ 
		printf ("%c", c); 
		c = fgetc(file_pointer); 
	} 
  
	fclose(file_pointer); 
	return 0; 
}
