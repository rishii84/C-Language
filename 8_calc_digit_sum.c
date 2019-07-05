#include<stdio.h>

void main(){
	int num = 432,temp;
	temp=num;
	int div,res=0;
	
	while(num!=0){
		div=num%10;
		res+=div;
		num=num/10;
	}
	
	printf("%d", res);
}
