#include<stdio.h>

void main() {
	int i;
	
	for(i=1;i<10;i++) {
		if(i==7) {
			continue;
		}
		
		printf("\n%d", i);
	}
}
