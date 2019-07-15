#include<stdio.h>

void main() {
	int i, inp, a[10], sum=0, data;
	
	printf("Enter the no. of data you want : ");
	scanf("%d", &data);
	
	for(i=0;i<=data-1;i++){
		printf("Enter value %d : ", i);
		scanf("%d", &inp);
		sum+=inp;
	}
	
	printf("%d", sum);
}
