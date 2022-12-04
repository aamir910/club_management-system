#include "Customer.h"


Member::Member(int    id,
	string  member_name,
	string address,
	int phonenumber,
	int substription_month,
	int substription_amount)
{
	this->id = id;
	this->member_name = member_name;
	this->address = address;
	this->substription_month = substription_month;
	this->substription_amount = substription_amount;
	this->phonenumber = phonenumber;


}


void Member::setId(int id)
{
	this->id = id;
}

void Member::setMember_name(string member_name)
{
	this->member_name = member_name;
}


void  Member::setaddress(string address)

{
	this->address = address;

}

void  Member::setsubstricption_month(int substription_month)
{
	this->substription_month = substription_month;
}


void  Member::setsubstricption_amount(int  substription_amount)
{
	this->substription_amount = substription_amount;

}
void  Member::setphonenumber(int  phonenumber)
{
	this->phonenumber = phonenumber;

}


int Member::getId()
{
	return id;
}
string Member::getMember_name()
{
	return member_name;
}
string  Member::getaddress()
{
	return address;
}

int  Member::getsubstricption_month()
{
	return substription_month;
}
int  Member::getsubstricption_amount()
{
	return substription_amount;
}
int  Member::getphonenumber()
{
	return phonenumber;
}
