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
		string buff;

		ifstream testfile;

		testfile.open("Info.txt");

		if (count != 1)
		{
			for (int i = 1; i <= (count-1) * 5; i++)
			{
				testfile >> buff;
			}
		}

		testfile >> Company_name;
		testfile >> Owner;
		testfile >> Number;
		testfile >> Adress;
		testfile >> Occupation;

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

	Guidebook search_by_compname(string obj)
	{
		Guidebook buff;
		ifstream testfile;
		int count = 0;

		testfile.open("Info.txt");

		while(count==0)
		{
			testfile >> buff.Company_name;
			testfile >> buff.Owner;
			testfile >> buff.Number;
			testfile >> buff.Adress;
			testfile >> buff.Occupation;
			if (buff.Company_name == obj)
			{
				count++;
			}
		}

		testfile.close();

		return buff;
	}

	Guidebook search_by_owner(string obj)
	{
		Guidebook buff;
		ifstream testfile;
		int count = 0;

		testfile.open("Info.txt");

		while (count == 0)
		{
			testfile >> buff.Company_name;
			testfile >> buff.Owner;
			testfile >> buff.Number;
			testfile >> buff.Adress;
			testfile >> buff.Occupation;
			if (buff.Owner == obj)
			{
				count++;
			}
		}

		testfile.close();

		return buff;
	}

	Guidebook search_by_number(string obj)
	{
		Guidebook buff;
		ifstream testfile;
		int count = 0;

		testfile.open("Info.txt");

		while (count == 0)
		{
			testfile >> buff.Company_name;
			testfile >> buff.Owner;
			testfile >> buff.Number;
			testfile >> buff.Adress;
			testfile >> buff.Occupation;
			if (buff.Number == obj)
			{
				count++;
			}
		}

		testfile.close();

		return buff;
	}

	Guidebook search_by_occupation(string obj)
	{
		Guidebook buff;
		ifstream testfile;
		int count = 0;

		testfile.open("Info.txt");

		while (count == 0)
		{
			testfile >> buff.Company_name;
			testfile >> buff.Owner;
			testfile >> buff.Number;
			testfile >> buff.Adress;
			testfile >> buff.Occupation;
			if (buff.Occupation == obj)
			{
				count++;
			}
		}

		testfile.close();

		return buff;
	}

	string get_comp() { return Company_name; }
	string get_owner() { return Owner; }
	string get_num() { return Number; }
	string get_addr() { return Adress; }
	string get_occ() { return Occupation; }
};