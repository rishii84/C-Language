#include<stdio.h>

void main() {
	int i;
	
	for(i=1;i<10;i++) {
		if(i==7) {
			break;
		}
		
		printf("\n%d", i);
	}
}
