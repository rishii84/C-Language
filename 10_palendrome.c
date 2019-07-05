#include<stdio.h>

void main(){
	int num = 434,temp;
	temp=num;
	int div,res=0,i=1;
	
	while(num!=0){
		div=num%10;
		res=res*10+div;
		num=num/10;
	}
	
	if(res==temp){
		printf("palendrom");
	}else{
		printf("not a palendrom");
	}
}
