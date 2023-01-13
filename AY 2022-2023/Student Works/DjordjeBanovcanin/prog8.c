#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
	
struct champion{
	char name[10], role;
	int diff, hp, mp;
	double armor, magRes;
	struct champion *c;
};

void printChampRef();
void printChampVal();

int main(){
	struct champion c1, c2 ,c3[100];

	printf("\nEnter champion name: ");
	scanf("%s", c1.name);
	printf("\nEnter the role of %s : ", c1.name);
	scanf(" %c", &c1.role);
	printf("\nEnter the difficulty level of %s : ", c1.name);
	scanf("%d", &c1.diff);
	printf("\nEnter armor value of %s : ", c1.name);
	scanf("%lf", &c1.armor);

	//*******************************

	printf("\nEnter champion name: ");
	scanf("%s", c2.name);
	printf("\nEnter the role of %s : ", c2.name);
	scanf(" %c", &c2.role);
	printf("\nEnter the difficulty level of %s : ", c2.name);
	scanf("%d", &c2.diff);
	printf("\nEnter armor value of %s : ", c2.name);
	scanf("%lf", &c2.armor);

	//pointers to connect c1 and c2
	c1.c = &c2;


	printChampRef(&c1);
	//printChampVal(c1);

	printChampRef(c1.c);


	return 0;
}//end main

void printChampRef(struct champion *c){
	printf("\nChampion name %s", c->name);
	printf("\nChampion role %c", c->role);
	printf("\nChampion difficulty %d", c->diff);
	printf("\nChampion amor calue %.1f \n", c->armor);

}

void printChampVal(struct champion c){
	printf("\nChampion name %s", c.name);
	printf("\nChampion role %c", c.role);
	printf("\nChampion difficulty %d", c.diff);
	printf("\nChampion amor calue %.1f \n", c.armor);

}