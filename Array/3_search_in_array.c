#include<stdio.h>

void main() {
	int numbers[10], i, search, temp=0, index=0;
	
	for(i=0;i<=9;i++){
		numbers[i] = i;
	}
	
	for(i=0;i<=9;i++){
		printf("\na[%d] = %d", i, numbers[i]);
	}
	
	printf("Enter no. that you are looking for : ");
	scanf("%d", &search);
	
	for(i=0;i<=9;i++){
		if(numbers[i]==search){
			temp=1;
			index=i+1;
			break;
		}
	}
	
	if(temp==1){
		printf("%d found at location %d", search, index);
	}else{
		printf("%d not found.", search);
	}
}
