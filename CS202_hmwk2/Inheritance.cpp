#include "Inheritance.h"

 base::base () 
{
  
num = 0;
  
 
marked = (int *) malloc (5 * sizeof (int));
  
for (int i = 0; i < 5; i++)
    marked[i] = 0;
  
 
rating = (int *) malloc (5 * sizeof (int));
  
for (int i = 0; i < 5; i++)
    rating[i] = 0;
  
 
activities = (char **) malloc (5 * sizeof (char *));
  
for (int i = 0; i < 5; i++)
    
activities[i] = (char *) malloc (sizeof (char));
} 
 
base::~base()
{

}

void base::display () 
{
  
for (int i = 0; i < num; i++)
    
cout << "Activity " << (i + 1) << ": " << activities[i] << endl;
} 

void base::addActivity (char act[]) 
{
  
strcpy (activities[num], act);
  
num++;
} 
void

base::markActivity (char act[]) 
{
  
for (int i = 0; i < num; i++)
    
    {
      
if (strcmp (act, activities[i]) == 0)
	
marked[i] = 1;
    
}
}

void
base::rateActivity (char act[]) 
{
  
for (int i = 0; i < num; i++)
    
    {
      
if (strcmp (act, activities[i]) == 0)
	
	{
	  
cout << "Enter rating(0-9): ";
	  
cin >> rating[i];
	  
return;
	
}
    
}
  
cout << "Activity " << act << " not found." << endl;
}

 
void
base::remove (char act[]) 
{
  
for (int i = 0; i < num; i++)
    
    {
      
if (strcmp (act, activities[i]) == 0)
	
	{
	  
strcpy (activities[i], "");
	  
cout << "Activity " << act << " deleted" << endl;
	  
return;
	
}
    
}
  
cout << "Activity " << act << " not found." << endl;
}

 
void
base::remove_all () 
{
  
for (int i = 0; i < num; i++)
    
    {
      
strcpy (activities[i], "");
} 
} 
 
athletic::~athletic () 
{
  
for (int i = 0; i < 5; i++)
    
free (activities[i]);
  
 
free (activities);
  
free (marked);
  
free (rating);
} 
 
SightSeeing::~SightSeeing () 
{
  
for (int i = 0; i < 5; i++)
    
free (activities[i]);
  
 
free (activities);
  
free (marked);
} 