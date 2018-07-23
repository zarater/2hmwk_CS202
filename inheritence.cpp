#include "inheritence.h"
//****************general************
general :: general()//default constructor
{

	x = 5;
	head = NULL;
	start = NULL;
	rear = NULL;
	for(int i = 0; i < x; ++i){	activities[i] = NULL;}
}

general :: general(const general& source)
{}

general :: ~general()
{
	//remove(head);
	if(rear) delete rear;
	if(start) delete start;
	for(int i = 0; i < x; ++i)	if(activities[i]!=NULL) delete activities[i];
}
int general:: remove(node* head)
{
	if(!head) return 0;
	node* temp = head;
	head = head -> getnext();
	delete temp;
	remove(head->getnext());
	//display(head);
	return 1;

}
int general :: remove_inner(node* head)
{
	if(!head->getdata()) return 0;
	delete head->getdata();
	cout << head -> getdata()->display() << endl;
	head->getdata() = NULL;
	return 1;
}
int general :: set(activity_manager* newdata[], int i)
{
	set(head, newdata, start, rear, i);
		return 1;
}
int general :: set(node* head, activity_manager* newdata[], node* start, node* rear, int i)
{
	node* temp = new node;
		temp->setdata(newdata, i);
		temp -> setnext(NULL);
	if(!head) 
	{
		head = new node;
		head = temp;
		start = head;
	}
	//temp->setnext(head->getnext());
	head->setnext(temp);
	head = temp;
return 1;
}

//setrear
	
int general :: display()
{
	display(head);
	return 1;
}
int general :: display(node* head)
{
	head = start;
	if(!head)  
	{
		cout << "nothing" << endl;
		return 0;
	}
	 head->display();
	display(head->getnext());
	return 1;
}
