#pragma once
#include <iostream>
#include <fstream>

using namespace std;

class Guidebook
{
	string Company_name;
	string Owner;
	string Number;
	string Adress;
	string Occupation;

public:
	Guidebook() : Company_name{ "Noname" }, Owner{ "John-Doe" }, Number{ "212-85-06" }, Adress{ "Florida" }, Occupation{ "Homeless" } { };
	Guidebook(string comp_P) : Company_name{ comp_P }, Owner{ "John-Doe" }, Number{ "212-85-06" }, Adress{ "Florida" }, Occupation{ "Homeless" } { };
	Guidebook(string comp_P, string name_P) : Company_name{ comp_P }, Owner{ name_P }, Number{ "212-85-06" }, Adress{ "Florida" }, Occupation{ "Homeless" } { };
	Guidebook(string comp_P, string name_P, string num_P) : Company_name{ comp_P }, Owner{ name_P }, Number{ num_P }, Adress{ "Florida" }, Occupation{ "Homeless" } { };
	Guidebook(string comp_P, string name_P, string num_P, string adr_P) : Company_name{ comp_P }, Owner{ name_P }, Number{ num_P }, Adress{ adr_P }, Occupation{ "Homeless" } { };
	Guidebook(string comp_P, string name_P, string num_P, string adr_P, string occ_P) : Company_name{ comp_P }, Owner{ name_P }, Number{ num_P }, Adress{ adr_P }, Occupation { occ_P } { };

	void set_comp(string comp_P) { Company_name = comp_P; }
	void set_name(string name_P) { Owner = name_P; }
	void set_num(string num_P) { Number = num_P; }
	void set_addr(string addr_P) { Adress = addr_P; }
	void set_occ(string occ_P) { Occupation = occ_P; }

	void put_infile()
	{
		ofstream testfile;

		testfile.open("Info.txt");

		testfile << this->get_comp() << ' ';
		testfile << this->get_owner() << ' ';
		testfile << this->get_num() << ' ';
		testfile << this->get_addr() << ' ';
		testfile << this->get_occ() << ' ';

		testfile.close();
	}

	void get_fromfile(int count = 1)
	{
		char* buff = new char[100];

		ifstream testfile;

		testfile.open("Info.txt");

		if (count != 1)
		{
			for (int i = 1; i <= (count-1) * 5; i++)
			{
				testfile >> buff;
			}
		}

		testfile >> buff;
		Company_name = buff;
		testfile >> buff;
		Owner = buff;
		testfile >> buff;
		Number = buff;
		testfile >> buff;
		Adress = buff;
		testfile >> buff;
		Occupation = buff;

		testfile.close();
	}

	void print_all()
	{
		cout << "\nCompany name: " << Company_name;
		cout << "\nOwner's name: " << Owner;
		cout << "\nPhone number: " << Number;
		cout << "\nOffice adress: " << Adress;
		cout << "\nOccupation: " << Occupation;
	}

	string get_comp() { return Company_name; }
	string get_owner() { return Owner; }
	string get_num() { return Number; }
	string get_addr() { return Adress; }
	string get_occ() { return Occupation; }
};