#include<stdio.h>
#include<string.h>

void main(){
	char name1[30], name2[30];
	int result;
	
	printf("Enter name1 : ");
	scanf("%s", name1);
	printf("\nEnter name2 : ");
	scanf("%s", name2);
	
	result=strcmp(name1,name2);
	
	if(result==0){
		printf("Both are same");
	}else{
		printf("Both are not equal");
	}
}
