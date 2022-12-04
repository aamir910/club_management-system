#include "Club.h"
#include <iterator>
#include <string>
void Club::deleteMember()
{
	if (customers.size() == 0 )
	{
		cout << "There no member currently registered in the club to delete  \n\n\n ";
		return;
	}
	int id ;
	cout << "enter the id of the menber which you want to delete: ";
	cin >> id;
	list<Member*>::iterator i = customers.begin();

	for (Member* x : customers)
	{
		if (x->getId() == id)
		{
			customers.erase(i);
			cout << "deleted successfully \n"; 
			return;
		}
		i++; 
	}
	cout << "id not found \n"; 

}



void Club::displayMembers()
{
	if (customers.size() == 0 )
	{
		cout << "There no member currently registered in the club \n\n\n "; 
		return; 
	}
	int i = 1;
	cout << "all the members in a Club are :  \n";
	
	for (Member* m : customers)
	{
		cout << "\nCustomer No " << i << endl;
		cout << "Name: " << m->getMember_name();
		cout << "\nAddress: " << m->getaddress();
		cout << "\nPhone_number: " << m->getphonenumber();
		cout << "\nSubcription_month: " << m->getsubstricption_month();
		cout << "\nSubcription_amount: " << m->getsubstricption_amount();
	}
}
void Club::addmember()
{

	string member_name;
	string address;
	int phonenumber;
	int substription_month;
	int substription_amount;
	int i = 1;


	{
		cout << "Enter the name of  member: ";
		cin.ignore();
		getline(cin, member_name);
		cout << "Enter the address member: ";
	
		getline(cin, address); 
	
		cout << "Enter the phone number of  member: ";
		cin >> phonenumber;

		cout << "Enter the subsription month of   member: ";
		cin >> substription_month;
		cout << "Enter the subsription amount of  member: ";
		cin >> substription_amount;


		cout << "Name: " << member_name;
		cout << "\nAddress: " << address;
		cout << "\nPhone_number: " << phonenumber;
		cout << "\nSubcription_month: " << substription_month;
		cout << "\nSubcription_amount: " << substription_amount;
		cout << "\n\n\n\n\n";


		// adding to the linked list od customer
		cout << "user with unique id " << customers.size() + 190924 << " successfully created\n ";
		customers.push_back(new Member(customers.size() + 190924, member_name, address, phonenumber, substription_month, substription_amount));





 
		

	} 
}
void Club::update_member()
{
	if (customers.size() == 0)
	{
		cout << "There no member currently registered in the club to update  \n\n\n ";
		return;
	}
	int updateid;
	cout << "enter the id of the menber which you want to update: ";
	cin >> updateid;
	Member* temp = NULL;
	for (Member* x : customers)
	{
		if (x->getId() == updateid)
		{
			temp = x;
			break;
		}
	}
	if (temp == NULL)
	{
		cout << "id not found ";
	}
	else
	{
		int choice;
		cout << "id is found \n "
			<< "press 1 to change name of member\n "
			<< "press 2 to change address of member \n"
			<< "press 3 to change phone number  of member\n "
			<< "press 4 to change substription month of member \n"
			<< "press 5 to change substription amount of member \n";
		cin >> choice;
		string string_input;
		int int_input;
		switch (choice)
		{
		case 1:
			cout << "enter the name to change :";
			cin >> string_input;
			temp->setMember_name(string_input);
			break;
		case 2:
			cout << "enter the address  to change :";
			cin >> string_input;
			temp->setaddress(string_input);
			break;
		case 3:
			cout << "enter the phone number  to change :";
			cin >> int_input;
			temp->setphonenumber(int_input);
			break;
		case 4:
			cout << "enter the  substription month to change :";
			cin >> int_input;
			temp->setsubstricption_month(int_input);
			break;
		case 5:
			cout << "enter the  substription amount to change :";
			cin >> int_input;
			temp->setsubstricption_amount(int_input);
			break;
		default:
			break;
		}
	}
}
