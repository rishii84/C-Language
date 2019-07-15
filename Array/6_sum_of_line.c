#include<stdio.h>

void main() {
	int a[3][3], i, j, sum=0, total=0;
	for(i=0;i<=2;i++){
		for(j=0;j<=2;j++){
			printf("Enter value for a[%d][%d] : ",i,j);
			scanf("%d", &a[i][j]);
		}
	}
	printf("\n\n");
	for(i=0;i<=2;i++){
		printf("\t");
		//	sum=0;
		for(j=0;j<=2;j++){
			printf("a[%d][%d]:%d\t",i,j,a[i][j]);
			sum+=a[i][j];
			total+=a[i][j];
			if(j==2){
				printf("\t= %d", sum);
				sum=0;
			}
		}
		//	print("%d", sum);
		printf("\n\n");
		
	}
	printf("\n\n");
	printf("\tTotal : %d\n\n", total);
}
