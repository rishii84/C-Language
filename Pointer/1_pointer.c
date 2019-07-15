/*
--------------------------------------------------------------------------------------------------------------------
 POINTER

	Pointer is a variable which holds the memory address of another variable. To make pointer variable we declare a
 	variable preceded by (*) indirection operator.
 
 		Syntax : Data_Type *Name_Of_Variable;
 		Example : int *p;
 
 	Size of pointer is always equal for all data type because every pointer store Base Address of the variable.

--------------------------------------------------------------------------------------------------------------------
 
 DEREFRENCING OF POINTER
 
 It is process of putting value in a variable using address.
 
 	Example:
 	 printf("%d", p1); will show the address.
 	 printf("%d", *p1); will show the value at that address.
 
 --------------------------------------------------------------------------------------------------------------------
 
 VOID POINTER
 
 Void pointer does not have any type it is also called as universal pointer.
 It can hold any type of address.
 
 	Note : At the time of derefrence void pointer we must have type cast it.
	Changing Data Type : (Data_Type)Variable_Name.
	
 --------------------------------------------------------------------------------------------------------------------
 
 Difference between Call by value and Call by address(refrence)
	
  In call by value when we make changes in formal argument actuall argument does not change.
  In call by address when we make changes in formal argument actuall argument changes.
  
  	Formal argument: Argument\Parameter passed during function declaration and defination.
  	Actuall argument: Argument\parameter passed during in function calling.

--------------------------------------------------------------------------------------------------------------------
   
*/ 

#include<stdio.h>
int swape(int *a, int *b, int *c)
{
	*c=*a;
	*a=*b;
	*b=*c;
	
}
void main()
{

int a=10;
int b =20;
int c= 0;
printf("a=%d and b=%d before swapping", a,b);
swape(&a,&b,&c);
printf("a=%d and b=%d before swapping", a,b);


 
}
// Program for call by value
	/*
	void changeVar(int a){
		a+=5;
		printf("\n%d", a);
	}
		
	void main() {
		int a=10;
		changeVar(a);
	}
	*/
	
// Program for call by address
	
	/*
	void changeVar(int *a){
		*a+=5;
		printf("\n%d", *a);
	}
	
	void main() {
		int a=10;
		changeVar(&a);
	}
	*/

// Programm for Void Pointer

	/*
	void main() {
		int i=10;
		void *p1=&i;
		
		printf("\n\t%d", *(int*)p1);
	}
	*/
