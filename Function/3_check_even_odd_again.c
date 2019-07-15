#include<stdio.h>

char checkEvenOdd();

void main() {
	int num, isEven;
	char again;
	
	printf("\n\n");
	again = checkEvenOdd();
	printf(" %c",again);
//	while(1){		
//		again = checkEvenOdd();
//		if(again=='y'){
//			checkEvenOdd();
//		}else{
//			break;
//		}
//	}
	
//	printf("\n\n");
}

char checkEvenOdd() {
	int num, yep;
	printf("\tEnter a no. : ");
	scanf("%d", &num);
	
	if(num%2==0){
		printf("\n\tNo. is even");
	}else{
		printf("\n\tNo. is odd");
	}
	
	printf("\n\tDo you want to retry(y/n) : ");
	scanf(" %c", &yep);
	
	return yep;
}
