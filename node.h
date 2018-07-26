#include "Inheritance.h"

// Node class defination
struct Node
{
		base *b;
		Node *next;
};

void addNode(Node **head,base *tempClass);
void displayNode(Node **head);