#include<stdio.h>

void main() {
	int row, i, j, temp, temp1;
	
	printf("Enter odd no. of rows for your pyramid : ");
	scanf("%d", &row);
	
	temp=row;
	temp1=row;
	
	for(i=1;i<=row-row/2;i++){
		for(j=1;j<=temp;j++){
			printf(" ");
		}
		
		temp--;
		
		for(j=1;j<=i*2-1;j++){
			printf("*");
		}
		
		printf("\n");
	}
	
	for(i=1;i<=row/2;i++){
		for(j=temp1;j>=1;j--){
			printf(" ");
		}
		
		temp1--;
		
		for(j=i*2-1;j>=1;j--){
			printf("*");
		}
		
		printf("\n");
	}
}
