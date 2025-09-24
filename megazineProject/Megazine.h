#pragma once
#include <iostream>
#include <string>
using namespace std;

class Megazine
{

	string name;
	string description;
	string tell;
	string email;
	int year;


public:
	
	Megazine();
	Megazine(string n, string d, string t, string e, int y);
	void Input();
	void Print();

	//void SetName(string n);
	//void SetDescription(string n);
	//void SetTelefon(string n);
	//void SetEmail(string n);
	//void SetYear(int y);

	//string GetName();
	//string GetDescription();
	//string GetTelefon();
	//string GetEmail();
	//string GetYear();


};

Megazine::Megazine()
{
	year = 0;
}

inline Megazine::Megazine(string n, string d, string t, string e, int y)
{
	name = n;
	description = d;
	tell = t;
	email = e;
	year = y;
}

inline void Megazine::Input()
{
	cin >> name;
	cin >> description;
	cin >> tell;
	cin >> email;
	cin >> year;
}

inline void Megazine::Print()
{
	cout << name << "\t" << description << "\t" << tell << "\t" << email << "\t" << year;
}
