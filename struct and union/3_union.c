/*

	UNION
	
	Union is also known as user defined data type. It is also a collection of hetrogenious types of data type.
	It is same as structure expect some difference.
	
	In structure all data member take their seperate memory, where as in union all data member share same memory
	location which is highest memory taken by a data member.
	
		Example : unoin emp {
					int eid;
					char name;
					float sal;
				  };
	
	Union is used when we have to print the value of a variable just after taking the value as it store only one memory.	
*/

#include<stdio.h>

union emp{
	char name[20];
	int eid;
	float sal;
}u1;

void main() {
	printf("\nEnter your name : ");
	scanf("%s", u1.name);
	printf("\n%s", u1.name);
	printf("\nEnter EID : ");
	scanf("%d", &u1.eid);
	printf("\n%d", u1.eid);
	printf("\nEnter your salary : ");
	scanf("%f", &u1.sal);
	printf("\n%f", u1.sal);
}
