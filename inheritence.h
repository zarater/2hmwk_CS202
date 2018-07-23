#include "class.h"
class general
{
	public:
		general();
		general(const general&);
		~general();
		int display();
		int set(activity_manager* newdata[], int i);
		int remove(node* head);
		int remove_inner(node* head);
	protected:
		int display(node* head);
		int set(node* head, activity_manager* newdata[], node* start, node* rear, int i);
		node* head;
		node* rear;
		node* start;
		activity_manager** activities;
		int x;

};

class athletic: public general
{
	public:
	protected:
};

class site: public general
{
	public:
	protected:
};



