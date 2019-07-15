//	String
//		1.String is collection of character.
//		2.In cthere is no seperate data type to handle string, for that we use char array.
//
//		NOTE: In c string is collection of characters which is terminated by with null character('\0'). Null
//			  character represents end of string.

#include<stdio.h>

void main(){
	int i;
	char name[30];
	
	printf("Enter your name : ");
	gets(name);
	
	printf("%s", name);
}
