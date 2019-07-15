// String library provide some function that we can use to perform several task on strings

//	strlen(str) : Gives the length of string.
//	strrev(str) : It reverse the string.
//	strcpy(str1, str2) : copy string from str1 to str2.
//	strcat(str1, str2) : It concate the strings.
//	strcmp(str1, str2) : It compare strings;
//						 If str1>str2 then return +ve value.
//						 If str1<str2 then return -ve value.
//						 If str1=str2 then return 0.

#include<stdio.h>
int strlength(char[]);

void main() {
	int result;
	char name[30]="Abhay";
	
	result=strlength(name);
	printf("%d", result);
}

int strlength(char name[]){
	int i, len=0;
	for(i=0;i<=30;i++){
		if(name[i]=='\0'){
			break;
		}else{
			len++;
		}
	}
	
	return len;
}
