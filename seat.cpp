#include "seat.h"

// class details member functions

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

int seat_planner :: nxt_roll;
int seat_planner :: nxt_room;


void seat_planner :: get_details()
{
	room_details();
	rollno_details();
}

void seat_planner :: set_room()
{
	if(nxt_room<t_rooms)
	{
		row = rows[nxt_room];
		col = cols[nxt_room];
		room = room_no[nxt_room];
		nxt_room++;
	}
}

void seat_planner :: set_branch()
{
	if(nxt_roll==0)
	{
		start_roll1 = start_roll[nxt_roll];
		end_roll1 = end_roll[nxt_roll];
		nxt_roll++;
		start_roll2 = start_roll[nxt_roll];
		end_roll2 = end_roll[nxt_roll];
		nxt_roll++;
			
	}
	else if(nxt_roll<t_branches)
	{
		start = start_roll[nxt_roll];
		end = end_roll[nxt_roll];
		nxt_roll++;
	}
	else
	{
		start = 0;
		end = 0;
	}
}

void seat_planner :: set_rollno()
{
	if(start_roll1>end_roll1)
	{
		set_branch();
		start_roll1 = start;
		end_roll1 = end;
	}
	
	if(start_roll2>end_roll2)
	{
		set_branch();
		start_roll2 = start;
		end_roll2 = end;
	}
	
}

void seat_planner :: seat_plan()
{
	for(int rm = 0; rm<t_rooms; rm++)
	{
		set_room();
		set_branch();
		
		for(x=0; x<col; x++)
		{
			for(y=0; y<row; y++)
			{
				set_rollno();
				if(y%2==0)
				{
					seat[x][y] = start_roll1;
					start_roll1++;
				}
				else
				{
					seat[x][y] = start_roll2;
					start_roll2++;
				}
				//cout<<seat[x][y]<<"\t";
			}
			//cout<<"\n";
		}
		output(row,col);
	}
}

void seat_planner :: output(int r, int c)
{
	cout<<"\n\n\t\t Room No: "<<room<<"\n\n";
	for(x=0; x<r; x++)
		{
			for(y=0; y<c; y++)
			{
				cout<<seat[y][x]<<"\t";
			}
			cout<<"\n";
		}
}

