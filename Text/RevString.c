//Reverse a String 
//- Enter a string and the program will reverse it and print it out.
#include <stdio.h>

int main(int argv, char**argc)
{

	int length = 0;
	while(argc[1][length] != '\0')
		length++;
	int i=0;
	for(i =0;i<length/2;i++)
	{
		//swap letters
		char temp = argc[1][i];
		argc[1][i] =argc[1][length-1-i];
		argc[1][length-1-i] = temp;
	}
	printf("%s", argc[1]);
	return 0;
}