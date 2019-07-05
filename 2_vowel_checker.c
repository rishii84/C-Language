#include<stdio.h>

void main() {
	printf("\n\t************************** Vowel Checker **************************\n");
	
	//	Declaring variables
	char user_inp;
	
	//	Taking Input
	printf("\n\tEnter any character : ");
	scanf("%c", &user_inp);
	
	printf("\n\t=======================================================\n");
	
	//	Checking if vowel or not
	switch(user_inp){
	    case 'a':
	    case 'A':
	    case 'e':
	    case 'E':
	    case 'i':
	    case 'I':
	    case 'o':
	    case 'O':
	    case 'u':
	    case 'U':
	      printf("\n\t\t%c is a vowel.\n", user_inp);
	      break;
	    default:
	      printf("\n\t\t%c is not a vowel.\n", user_inp);
	  }
	
	
	printf("\n\t=======================================================\n");
	printf("\n\t**************** Thank you for using Vowel Checker ****************\n");
}
