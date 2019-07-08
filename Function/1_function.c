//	Function : It is a block of code which is used to perform a pecific task.
// 			  It is a group of statement, which we can use multiple times.

//	Type of function:
//		1. Predefined function
//		2. User defined function

//	1.Predefined function: The function which are already present in library is known as predefined function.
//	2.User defined function: The function which are defined by user.

//	Prototype error: When you not include the library.

//	Steps for making user defined function
//		1. Declaration
//		2. Defination
//		3. Calling

//	Types of user defined function
//		1. Function with no return type and no argument. (void funname();)
//		2. Function with return type and no argument. (int funname();)
//		3. Function with no return type and with argument. (void funname(int a);)
//		4. Function with return type and argument. (int funname(int a);)

// Argument : the values which we pass while we call a function.
#include<stdio.h>

void dispRecord(int a);

void main(){
	
	int num;
	printf("Enter any no. : ");
	scanf("%d", &num);
	dispRecord(num);
}

void dispRecord(int a){
	printf("%d", a);
}
