#include<stdio.h>

void main() {
	int num=4, i, prime;
	
	for(i=1;i<=num;i++){
		if(i==1 || i==num){
			continue;
		}
		if(num%i==0){
			printf("It is not a prime no.");
			break;
		}else{
			prime=1;
		}
	}
	
	if(prime==1){
		printf("It is a prime no.");
	}
}
