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
	
*/

#include<stdio.h>

union emp{
	char name[20];
	int eid;
	double sal;
}u1;

void main() {
	printf("Memory size : %d", sizeof(u1));
}
