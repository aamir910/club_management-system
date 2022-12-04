// Club_Manangement_system.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <list>
#include "customer.h"
#include "club.h"

using namespace std;

int main()
{
    int choice;
    cout << "                    ***** CULB MANAGEMENT SYSTEM ******* \n";
    cout << "Press 1  to run the sign in as staff  \n";
    cout << "Press 2  to sign as user  \n";
    Club person;
    int  b;
    cin >> choice;
    switch (choice)
    {
      
        
    case 1:

        do
        {
            cout << "\n\n\n\n"; 
            cout << " |Authorized person can do the following|  \n ";
            cout << "press 1 to add the member of the club  \n";
            cout << "press 2 to update the member of the club \n";
            cout << "press 3 to delete the member of the club \n";
            cout << "press 4 to check the list  of the club \n";

            cout << "press 5 to exit \n";


            cin >> b;
            switch (b)
            {
            case 1:
                cout << "add member  \n ";

                person.addmember();
                break;
            case 2:

                person.update_member();
                break;
            case 3:
                person.deleteMember();
                break;
            case 4:
                person.displayMembers();
                break;
            default:
                break;
            }

        } while (b!=5);
        break; 
    case 2:

        cout << "register yourself first \n ";
        person.addmember();

        
    }
}
