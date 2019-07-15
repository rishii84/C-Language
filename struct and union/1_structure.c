/*
	Structure
	
	structure is known as user defined data type. It is collection of hetrogenous types of data item.
	To declare structure we use struct keyword.
	
		Syntax: struct name_of_structure {
					data_type variable_name;
				}
				
		Example: struct emp {
					int eid;
					float percent;
					chare name;
				 }
				 
	STRUCTURE VARIABLE
	
	We can decalre structure variable by using two way.
	1. At the time of structure declaration.
	
		Example: struct emp {
					int num;
					float damn;
				 }a,b;
				 
	2. With in main function
	
		Example : struct emp e1;
*/

#include<stdio.h>
#include<string.h>

// Creating struct variable
typedef struct emp {
		char name[30];
		int eid;
		int sal;
}ud;
	
void main() {
	ud e1;
	
	printf("Enter your name  : ");
	gets(e1.name);
	printf("Enter your EID  : ");
	scanf("%d", &e1.eid);
	printf("Enter your Salary  : ");
	scanf("%d", &e1.sal);
	
	printf("\nName : %s", e1.name);	
	printf("\nEID : %d", e1.eid);	
	printf("\nSalary : %d", e1.sal);
}
