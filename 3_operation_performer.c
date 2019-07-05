#include<stdio.h>

void main() {
	//	Declaring variables
	int num1, num2, operation;
	
	printf("\n\t******************************** Calculator ********************************\n");
	
	//	Taking two numeric values
	printf("\n\tEnter two values : ");
	scanf("%d%d",&num1, &num2);
	
	// Printing options
	printf("\n\t****** Select any of these option ******\n");
	printf("\n\t\t1 for Addition");
	printf("\n\t\t2 for Subtraction");
	printf("\n\t\t3 for Multiplication");
	printf("\n\t\t4 for Division\n");
	printf("\n\t****** Select any of these option ******\n");
	
	// Taking option
	printf("\n\tEnter operation to perform : ");
	scanf("%d", &operation);
	
	//	Calculation the result
	switch(operation){
		case 1:
			printf("\n\t\tAddition is : %d\n", num1+num2);
			break;
		case 2:
			printf("\n\t\tSubtraction is : %d\n", num1-num2);
			break;
		case 3:
			printf("\n\t\tMultiplication is : %d\n", num1*num2);
			break;
		case 4:
			printf("\n\t\tDivision is : %d\n", num1/num2);
			break;
		default:
			printf("\n\t\tPlease select only from given option\n");
	}
	
	printf("\n\t********************* Thank you for using our programm *********************\n");
	
}
