/*
	LINEAR SEARCH
	
		-In this searching technique we compare the elements of the array one-by-one with the key element we are looking for.
		-It is a very simple searching algorithm but takes a lot of time.
		-If the key element is present in the array then the search is successful else not.
*/

#include<stdio.h>

void main(){
	int i, a[5]={1,2,3,4,5}, key;
	
	printf("Enter ele you want to search : ");
	scanf("%d", &key);
	
	linearSearch(a[5], key);
}

int linearSearch(int a[5], int key) {
	int i;
	for(i=0;i<=4;i++) {
		if(key==a[i]){
			printf("Found");
			break;
		}
	}
}
