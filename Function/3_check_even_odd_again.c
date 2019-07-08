#include<stdio.h>

void checkEvenOdd(int);

void main() {
	int num, isEven, again=0;
	
	printf("\n\n");
	
	while(again!=1){
		printf("\tEnter a no. : ");
		scanf("%d", &num);
		checkEvenOdd(num);
		
		printf("\tDo you want to retry(1 for yes) : ");
		scanf("%d", &again);
	}
	
	printf("\n\n");
}

void checkEvenOdd(int num) {
	if(num%2==0){
		printf("\n\tNo. is even");
	}else{
		printf("\n\tNo. is odd");
	}
}
