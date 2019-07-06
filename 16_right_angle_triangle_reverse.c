#include<stdio.h>

void main() {
	int row, i, j, temp;
	
	printf("Enter no. of rows you want : ");
	scanf("%d", &row);
	
	temp=row;
	
	for(i=1;i<=row;i++){
		for(j=1;j<=temp;j++){
			printf(" ");
		}
		
		temp--;
		
		for(j=1;j<=i;j++){
			printf("*");
		}
		printf("\n");
	}
}
