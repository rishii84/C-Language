#include<stdio.h>

void main() {
	int a[3][3]={1,2,3,4,5,6,7,8,9}, i, j, searchInp;
	
	printf("Enter the value you are looking for : ");
	scanf("%d", searchInp);
	
	for(i=0;i<=2;i++){
		
		printf("\t");
		for(j=0;j<=2;j++){
			if(searchInp==a[i][j]){
				printf("found it at a[%d][%d]", i, j);
				break;
			}
		}
		printf("\n\n");
		
	}
	printf("\n\n");
}
