#include<stdio.h>

void main() {
	int num=4, i, prime;
	
	printf("Enter a number : ");
	scanf();
	for(i=1;i<=num;i++){
		if(num%i==0){
			prime++;
		}
	}
	
	if(prime==2){
		printf("It is a prime no.");
	}else{
		printf("It is not a prime no.");
	}
}
