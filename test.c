#include<stdio.h>

void main() {
	int num=424, temp, res=0, div;
	temp=num;
	
	while(num!=0){
		div=num%10;
		res=res*10+div;
		num=num/10;
	}
	
	printf("%d", res==temp);
}
