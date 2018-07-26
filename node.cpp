#include<iostream>
#include<cstring>
#include "node.h"

//*********************implementation node *************************//

void addNode(Node **head,base *tempClass) // insertion in the beginning
{
	Node *ptr = new Node;
	ptr->b = tempClass;
	ptr->next = *head;
	
	Node *temp = *head;
	if(*head != NULL)
	{
		while(temp->next != *head)
			temp = temp->next;
		temp->next = ptr;
	}
	else
		ptr->next = ptr;

	cout <<"here";
}

void displayNode(Node **head)
{
	Node *temp = *head;
	if(*head != NULL)
	{
		temp->b->display();
		temp = temp->next;
	}
	else 
		return;

	while(temp != *head)
	{
		temp->b->display();
		temp = temp->next;	
	}
}
