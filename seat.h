#include <iostream>

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

	// Static vatiables
	static int s;

public:

	void room_details();
	void rollno_details();
		
};

class planner : public details
{
protected:
	
public:
	
	void get();
	void processing();

};

