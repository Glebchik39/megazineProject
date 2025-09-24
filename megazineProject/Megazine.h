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
	static int count;


public:
	
	Megazine();
	Megazine(string n, string d, string t, string e, int y);
	void Input();
	void Print();

	void SetName(string n);
	void SetDescription(string d);
	void SetTelefon(string t);
	void SetEmail(string e);
	void SetYear(int y);

	string GetName();
	string GetDescription();
	string GetTelefon();
	string GetEmail();
	int GetYear();


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
	char buffer[100];
	cout << "Enter a name: ";
	cin.getline(buffer, 100);
	name = buffer;
	cout << "Enter a Discription: ";
	cin.getline(buffer, 100);
	description = buffer;
	cout << "Enter a telefon: ";
	cin.getline(buffer, 100);
	tell = buffer;
	cout << "Enter a email: ";
	cin.getline(buffer, 100);
	email = buffer;
	cout << "Enter a year: ";
	cin >> year;
	count++;
}

inline void Megazine::Print()
{
	cout << "\n" << "Name: " << name << "\n" << "Discription: " << description << "\n" << "Telefon: " << tell << "\n" << "Email: " << email << "\n" << "Year: " << year << "\n" << "Count: " << count << "\n\n";
}

inline void Megazine::SetName(string n)
{
	n = name;
}

inline void Megazine::SetDescription(string d)
{
	d = description;
}

inline void Megazine::SetTelefon(string t)
{
	t = tell;
}

inline void Megazine::SetEmail(string e){
	e = email;
}

inline void Megazine::SetYear(int y)
{
	y = year;
}

inline string Megazine::GetName()
{
	return name;
}

inline string Megazine::GetDescription()
{
	return description;
}

inline string Megazine::GetTelefon()
{
	return tell;
}

inline string Megazine::GetEmail()
{
	return email;
}

inline int Megazine::GetYear()
{
	return year;
}


int Megazine::count = 0;



