#include "Inheritance.h"


int main()
{
	char inputAct[20],yesNo[4],temp[20];
	int numAct,flag=1;
	cout << "Hello! Welcome to the world of activites" << endl;
	cout << "The following activities are available:\n1)Athletics\n2)Sight Seeing\n";
	cout << "NOTE: All inputs are case sensitive!" << endl;
	cout << "Which activity would you like to do? ";	
	cin.getline(inputAct,20);
	
	if(strcmp("Athletics",inputAct) == 0)
	{
		cout << "\nThe following activities are available in Athletics type" << endl;
		cout << " 1) Wind surfing\n2)Jet sking\n3)Hiking\n4)Kayaking" << endl; 
		cout << "These activites require a few skills" << endl;
		cout << "You would have to drive to the location and possess the respective equipment for the activites\n";
		cout << "Would you like to continue for this activity, enter Yes else No" << endl;
		cin >> yesNo;

		if(strcmp(yesNo,"Yes")==0)
		{
			base *altheticAct = new athletic();

			cout << "Out of those 4 activites, how many would you like to do?";
			cin >> numAct;
			for(int i = 0 ; i < numAct ; i++)
			{
				cout << "Enter name of activity " << (i+1) << ": ";
				char ch;
				int j=0;
				strcpy(temp,"");
				if(flag)
				{
					while(cin.get(ch) && ch != '\n');
					flag = 0;
				}
				cin.getline(temp,20);
				altheticAct->addActivity(temp);
			}
			altheticAct->display();
		}
		else if(strcmp("Sight Seeing",inputAct) == 0)
		{
			//continue;
		}
	}
	return 0;
}