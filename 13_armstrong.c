#include<stdio.h>

void main() {
	int num=371, temp, i, res=0, div;
	temp=num;
	
	while(num!=0){
		div=num%10;
		res+=div*div*div;
		num/=10;
	}
	
	if(res == temp){
		printf("It is an armstrong no.");
	}else{
		printf("It is not an armstrong no.");
	}
}
