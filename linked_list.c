#include <stdio.h>
#include <stdlib.h>
void createlist();
void addnodeatend();
void trversal();
struct node {
	int data;
	struct node* next;
}*classroomT1;
int main() {
	
	createlist();
	addnodeatend();
	trversal();
	return 0;
}
void createlist(){
	int data;
	struct node *newnode, *temp;
	int i;
	classroomT1=(struct node*)malloc(sizeof(newnode));
	classroomT1 -> data= data;
	classroomT1 -> next= NULL;
	temp= classroomT1;
	for(i=2;i<=5;i++)
	{
	newnode=(struct node*)malloc(sizeof(newnode));	
	newnode -> data= data;
	newnode -> next= NULL;
	temp-> next= newnode;
	temp= temp->next;
	}
}
