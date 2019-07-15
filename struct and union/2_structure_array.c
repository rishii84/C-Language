#include<stdio.h>

typedef struct emp {
	char name[20];
	int eid;
	double sal;	
}ud;

void main() {
	int i;
	ud e1[3];
	
	for(i=0;i<=2;i++){
		printf("Enter your name : ");
		scanf("%s", e1[i].name);
		printf("Enter EID : ");
		scanf("%d", &e1[i].eid);
		printf("Enter your salary : ");
		scanf("%lf", &e1[i].sal);
	}
	
	for(i=0;i<=2;i++){
		printf(" %s", e1[i].name);
		printf(" %d", e1[i].eid);		
		printf(" %lf", e1[i].sal);
	}
}
