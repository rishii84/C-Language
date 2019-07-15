#include<stdio.h>

// Defining function
void checkGreater(int, int);
void checkEven(int);
void checkGreaterFrom(int);

// Main function
void main() {
	int num1, num2;
	
	printf("\n\tEnter first value : ");
	scanf("%d", &num1);
	
	printf("\n\tEnter second value : ");
	scanf("%d", &num2);
	
	checkGreater(num1, num2);
}

// Checking greater of two no.
void checkGreater(int num1, int num2) {
	if(num1<num2){
		checkEven(num2);
	}else if(num1>num2) {
		checkEven(num1);
	}else{
		printf("Both are equal");
	}
}

// Check if the no. is even
void checkEven(int num) {
	if(num%2==0){
		checkGreaterFrom(num);
	}else{
		printf("It is wrong because it is odd");
	}
}

// Check if the no. is greater than 100
void checkGreaterFrom(int num){
	if(num>100){
		printf("\n\tyou are alright");
	}
}
