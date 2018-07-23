#include "inheritence.h"

int main()
{
	char a_activity_input[100];
	int num_user;
	int x = 5;//user will have to init
	activity_manager** a_act;
	athletic for_athletes;
	site for_sightsee;
    a_act = new activity_manager*[x];

	for(int i = 0; i < x; ++i)	//dowhile loop!! ask( )
	{
	cout << "please type an activity" << endl;
	cout << "What would be the activity?" << endl;
	cin.get(a_activity_input, 100, '\n'); cin.ignore(100, '\n');
	a_act[i]->set(a_activity_input);

		/*a_act[i]->display();*/
	cout << "please describe if athletic activity or sight see activity" << endl;
	cin >> num_user; cin.ignore(100, '\n');
	if(num_user == 1)
   	for_athletes.set(a_act, i);	
	else if(num_user == 2)
   	for_sightsee.set(a_act, i);	
	}

	for_athletes.display();

	return 1;
}

