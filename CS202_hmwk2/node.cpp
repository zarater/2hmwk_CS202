#include "Inheritance.h"

// Node class defination
class Node
{
	private:
		base b;
		Node *next;
	public:
		void addNode(Node *head,base tempClass);
		void displayNode(Node *head);
};


//*********************implementation node *************************//

void Node::addNode(Node *head,base tempClass) // insertion in the beginning
{
	Node *ptr = new Node;
	ptr->b = tempClass;
	ptr->next = head;
	
	Node *temp = head;
	if(head != NULL)
	{
		while(temp->next != head)
			temp = temp->next;
		temp->next = ptr;
	}
	else
		ptr->next = ptr;
}

void Node::displayNode(Node *head)
{
	Node *temp = head;
	while(temp != head)
	{
		temp->b.display();
		temp = temp->next;	
	}
}