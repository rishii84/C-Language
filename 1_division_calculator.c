#include<stdio.h>

void main() {
	//	Declaring variables
	int maths, hindi, english, physics, chemistry, total;
	float percent;
	
	printf("\n\t************************* Welcome to Division Checker *************************\n");
	
	//	Taking values from user
	printf("\n\tEnter obtained marks in maths : ");
	scanf("%d", &maths);
	printf("\tEnter obtained marks in hindi : ");
	scanf("%d", &hindi);
	printf("\tEnter obtained marks in english : ");
	scanf("%d", &english);
	printf("\tEnter obtained marks in physics : ");
	scanf("%d", &physics);
	printf("\tEnter obtained marks in chemistry : ");
	scanf("%d", &chemistry);
	
	//	Calculation of total and percentage
	total = maths+hindi+english+physics+chemistry;
	percent = total/5;
	
	//	Printing total and percentage
	printf("\n\t=================================\n");
	printf("\tTotal : %d", total);
	printf("\n\tPercentage : %f%", percent);
	printf("\n\t=================================\n");
	
	printf("\t=================================\n");
	//	Checking Division
	if(percent>60) {
		printf("\tYou scored First Division");
	} else if(percent>40 && percent<60) {
		printf("\tYou scored Second Division");
	} else {
		printf("\tyou scored Third Division");
	}
	printf("\n\t=================================\n");
	
	printf("\n\t************************* Thank you for using our program *************************\n");	
}
