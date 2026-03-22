#include "reservation.h"

using namespace std;

Reservation::Reservation() : reservation_list()
{
    
}

char Reservation::menu()
{
/*  This is the menu for the user. The menu displays the choices the user has. The user will enter a character, and that character will be returned to be used in the start function of the reservation class.*/

	string choice;
	cout << "\n\t\tMenu\n";
	cout << "\t 1\tEnter a reservation\n";
	cout << "\t 2\tCancel a reservation\n";
	cout << "\t 3\tPrint a passenger list\n";
	cout << "\t 4\tSearch for a passenger\n";
	cout << "\t 5\tChange Reservation Seat\n";
	cout << "\t 6\tChange Reservation Food\n";
	cout << "\t 0\tEXIT\n";
	
	cout << "\nEnter your choice: ";
	cin  >> choice;	// user input
	
	return choice[0];	// returns user input
}

void Reservation::start(Linked_list& n)
{
/* once this function is called, a loop will be created that allows the user to input how they want the list to be manipulated. Functions include insert, remove, print,search, changeSeat, and changeFood. If user enters '0', then the loop will terminate.*/

	bool done = false;	// done boolean

	do{
	
		char choice = menu(); //get the choice from the user
		switch(choice)
		/*this switch compares the choice entered
		  by the user to determine which function
 		  to call.
		*/
		
		{
			case '1': insert(); break;
			case '2': remove(); break;
			case '3': print(); break;
			case '4': search(); break;
			case '5': change_seat(); break;
			case '6': change_food(); break;
			case '0': done = true; break;
		default: cout << "INVALID INPUT" << endl;
		}
	} while(!done); // if done, then quit, else continue

cout << "\nThank you for using my simulation." << endl;

}

void Reservation::search()
{

    
}
	
void Reservation::insert()
{
    
}
	
void Reservation::remove()
{
    
}
		  
void Reservation::print()
{
    
}
	
void Reservation::change_food()
{
    
}
		 
void Reservation::change_seat()
{
    
}
