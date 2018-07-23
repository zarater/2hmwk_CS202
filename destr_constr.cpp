#include "class.h"




//****************activity_manager************

activity_manager :: activity_manager(): activity_user(NULL)//default constructor
{}

activity_manager :: activity_manager(const activity_manager& source) //copy constructor
{
	activity_user = new char [strlen(source.activity_user)+1];
	strcpy(activity_user, source.activity_user);
}

activity_manager :: ~activity_manager() // destructor
{
	delete activity_user;
}
//**************node************************
node :: node(): data(NULL), next(NULL) //constructor
{
}
node :: node(const node& source)
{
	next = source.next;
}
node :: ~node() //deconstructor
{
	delete next;
	delete data;
}

