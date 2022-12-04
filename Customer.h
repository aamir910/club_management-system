#pragma once



#include <iostream>
using namespace std;


class Member {

	int    id;
	string  member_name;
	string address;
	int phonenumber;
	int substription_month;
	int substription_amount;
public:
	Member(int    id,
		string  member_name,
		string address,
		int phonenumber,
		int substription_month,
		int substription_amount);

	//setter of the customer class  
	void setId(int id);
	void setMember_name(string member_name);
	void  setaddress(string address);
	void setphonenumber(int phonenumber);
	void  setsubstricption_month(int substription_month);
	void  setsubstricption_amount(int  substription_amount);
	// getter of the customer class
	int getId();
	string getMember_name();
	string  getaddress();
	int  getsubstricption_month();
	int  getsubstricption_amount();
	int getphonenumber();

};
