#pragma once
#pragma once
#include<iostream>
#include<list> 
#include "Customer.h"
using namespace std;

class Club
{
	list<Member*> customers;
public:
	void addmember();
	void update_member();
	void deleteMember();
	void displayMembers();


};
