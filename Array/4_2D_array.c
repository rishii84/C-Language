#include<stdio.h>

void main() {
	int a[3][3], i, j;
	for(i=0;i<=2;i++){
		for(j=0;j<=2;j++){
			printf("Enter value for a[%d][%d] : ",i,j);
			scanf("%d", &a[i][j]);
		}
	}
	printf("\n\n");
	for(i=0;i<=2;i++){
		printf("\t");
		for(j=0;j<=2;j++){
			printf("a[%d][%d]:%d\t",i,j,a[i][j]);
		}
		printf("\n\n");
		
	}
	printf("\n\n");
}
