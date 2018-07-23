#include "class.h"

//*********************implementation node *************************///
//node

void node :: setnext(node* newnext)
{
	next = newnext;
}

activity_manager*& node :: setdata(activity_manager** source, int i)
{
	data = source[i];
	return data;
}
node*& node :: getnext()
{
	return next;
}


activity_manager*& node :: getdata()
{
	
	return data;
}

int node :: display()
{
	data->display();
	return 1;
}

//****************** implementation activity_manager ****************///
//activity_manager
int activity_manager :: display()
{
	cout <<"here display" << endl;
	return 1;
}
int activity_manager :: set(char user[])
{
	activity_user = new char[strlen(user)+1];
	strcpy(activity_user, user);
	return 1;
}
	
	
