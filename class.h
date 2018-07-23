#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;

class activity_manager
{
	public:
		activity_manager();
		activity_manager(const activity_manager&);
		~activity_manager();
		int display();
		int set(char user[]);
	protected:
		char* activity_user;
};

class node
{
	public:
		node();
		node(const node&);
		~node();

		void setnext(node* newnext);
		node*& getnext();
		activity_manager*& setdata(activity_manager**, int i);
		activity_manager*& getdata();
		int display();
	protected:
		activity_manager *data;
		node* next;
};


