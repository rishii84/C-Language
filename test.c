#include<stdio.h>
void main(){
	int count=0, num;
	
	printf("Please enter a digit : ");
	scanf("%d", &num);
	
	while(num!=0){
		num=num/10;
		count++;
	}
	printf("\n\n%d", count);
}
