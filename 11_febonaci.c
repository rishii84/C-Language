#include<stdio.h>

void main() {
	int first=0,second=1,i,temp;
	
	printf("%d", first);
	printf("\n%d", second);
	
	for(i=2;i<=20;i++){
		temp=first+second;
		printf("\n%d", temp);
		first = second;
		second = temp;	
	}
}
