/*
	BINARY ARRAY
	
	In this search technique we divide the gived array into two halves at each level and look for the key element in one of the two halves.
	This algorithm works only for sorted array.
	It is similar to searching a word in dictionary.
	
		Best case : when key is at center
		Worst case : when the key is not there
*/

#include<stdio.h>

void bsearch(int a[], int key);

void main(){
	int a[10]={1,2,3,4,5,6,7,8,9,10}, key;
	
	printf("Enter no. : ");
	scanf("%d", &key);
	
	bsearch(a, key);
}

void bsearch(int a[], int key){
	int start=0,end=9, mid, flag=0;
	
	while(start<=end){
		mid=(start+end)/2;
		if(key==a[mid]){
			flag++;
			break;
		}else if(key<a[mid]){
			end=mid-1;
		}else{
			start=mid+1;
		}
	}
	
	if(flag==0) {
		printf("Not found");
	}else{
		printf("Found");
	}
}
