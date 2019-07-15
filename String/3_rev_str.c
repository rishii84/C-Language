#include<stdio.h>
#include<string.h>

void main() {
	int i, j=0;
	char name[30]="Abhay", revstr[30];
	printf("Name before reverse : %s", name);
	printf("\nName after reverse : ");
	for(i=strlen(name)-1;i>=0;i--){
		revstr[j]=name[i];
		j++;
	}
	
	printf("%s", revstr);
}
