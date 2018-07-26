#include<cstdlib>
#include<cstring>
#include <iostream>
#include<stdio.h>

using namespace std;

class base
{
	protected:
		int *marked; // array to mark activities if done or not
		int *rating;
		int num;
		char **activities;
		
	public:
		base();
		base(const base&);
		virtual ~base();
		void display();
		void addActivity(char act[]);
		void markActivity(char act[]);
		void rateActivity(char act[]);
		void remove(char act[]);
		void remove_all();
};

class athletic: public base
{
	public:			
		~athletic();
};

class SightSeeing: public base
{
	public:
		~SightSeeing();
};