#ifndef LINKED_LIST_H_
#define LINKED_LIST_H_
#include <string>

using namespace std;

struct Passenger
{
	int passenger_id;
	string last_name;
	string first_name;
	string address;
	int reservation_number;
	string phone_number;
	int seat_number;
	string menu_item;
	
	Passenger* next;
};

class Linked_list
{
	public:
	    Linked_list();
	    bool insert_node(Passenger*);
	    bool delete_node(Passenger*);
	    void print_list();
	    int list_size();
	    int search_node(Passenger*);
	    //~Linked_list();
    private:
	    Passenger* head;
};
//#include "linked_list.cpp"
#endif