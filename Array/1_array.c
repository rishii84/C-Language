// Arrray is collection of variables having similar(homogenous) data type.

// It is collection of similar type of data item and store in continuos memory location. 
// It is also known as index collection of data

// Benifits
//	1. Within one name we can store multiple value
//	2. reduce progeamming consumption
//	3. make retryable operation fast

// Disadvantages
//	1. size can not be increased or decreased during run time.
//	2. don't have pre defined methods.

// Types of Array
//	1. Single dimension array: single dimension array has one subscript. (a[10])
//	2. Multi dimension array: multi dimension array have two subscript. (a[10][10])

#include<stdio.h>
void main(){
	int i, numbers[10];
	
	for(i=0;i<=9;i++){
		numbers[i] = i;
	}
	
	for(i=0;i<=9;i++){
		printf("\n%d", numbers[i]);
	}	
}
