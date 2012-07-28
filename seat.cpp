#include "seat.h"

// class details member functions

int details :: s;

void details :: room_details()
{
	cin>>t_rooms;
	for(int i=0; i<t_rooms; i++)
	{
		cin>>room_no[i]>>rows[i]>>cols[i];
	}
}

void details :: rollno_details()
{
	cin>>t_branches;
	for(int i=0; i<t_branches; i++)
	{
		cin>>branch[i]>>start_roll[i]>>end_roll[i];
	}
}

// Class processing members declaration

void planner :: get()
{
	room_details();
	rollno_details();
}

void planner :: processing()
{

}
