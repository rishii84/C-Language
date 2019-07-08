#include<stdio.h>

int checkEvenOdd(int);

void main() {
	int num, isEven;
	
	printf("\n\n");
	
	printf("\tEnter a no. : ");
	scanf("%d", &num);
	isEven=checkEvenOdd(num);
	
	if(isEven==1){
		printf("\tEven");
	}else{
		printf("\tOdd");
	}
	
	printf("\n\n");
}

int checkEvenOdd(int num) {
	if(num%2==0){
		return 1;
	}else{
		return 0;
	}
}
