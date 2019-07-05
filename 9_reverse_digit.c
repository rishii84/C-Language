#include<stdio.h>

void main(){
	int num = 432;
	int div,res=0,i=1;
	
	while(num!=0){
		div=num%10;
		res=res*10+div;
		num=num/10;
	}
	
	printf("%d", res);
}
