#include <iostream>
#include <fstream>

using namespace std;
const int size = 30;

// Class for room and roll no details
class details
{
protected:

	// Room variables
	string room_no[size]; 
	int rows[size], cols[size], t_rooms;

	// Roll No. variables
	int t_branches, start_roll[size], end_roll[size];
	string branch[size];

	// File object
	fstream  file;

public:

	void room_details();
	void rollno_details();
		
};

class seat_planner : public details
{
protected:

	int seat[size][size], start, end, start_roll1, start_roll2, end_roll1, end_roll2, x, y, col, row;
	static int nxt_roll, nxt_room;  
	string room;
	
public:
	
	void get_details();
	void set_branch();
	void set_room();
	void seat_plan();
	void set_rollno();
	void output(int r, int c);

};

