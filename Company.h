#pragma once
#include <iostream>
#include <fstream>
#include <list>

using namespace std;

class Company
{
	string Company_name;
	string Owner;
	string Number;
	string Adress;
	string Occupation;

public:
	Company() : Company_name{ "Noname" }, Owner{ "John-Doe" }, Number{ "212-85-06" }, Adress{ "Florida" }, Occupation{ "Homeless" } { };
	Company(string comp_P) : Company_name{ comp_P }, Owner{ "John-Doe" }, Number{ "212-85-06" }, Adress{ "Florida" }, Occupation{ "Homeless" } { };
	Company(string comp_P, string name_P) : Company_name{ comp_P }, Owner{ name_P }, Number{ "212-85-06" }, Adress{ "Florida" }, Occupation{ "Homeless" } { };
	Company(string comp_P, string name_P, string num_P) : Company_name{ comp_P }, Owner{ name_P }, Number{ num_P }, Adress{ "Florida" }, Occupation{ "Homeless" } { };
	Company(string comp_P, string name_P, string num_P, string adr_P) : Company_name{ comp_P }, Owner{ name_P }, Number{ num_P }, Adress{ adr_P }, Occupation{ "Homeless" } { };
	Company(string comp_P, string name_P, string num_P, string adr_P, string occ_P) : Company_name{ comp_P }, Owner{ name_P }, Number{ num_P }, Adress{ adr_P }, Occupation{ occ_P } { };

	void set_comp(string comp_P) { Company_name = comp_P; }
	void set_name(string name_P) { Owner = name_P; }
	void set_num(string num_P) { Number = num_P; }
	void set_addr(string addr_P) { Adress = addr_P; }
	void set_occ(string occ_P) { Occupation = occ_P; }

	void put_infile();

	void put_infile(ofstream& testfile);

	void get_fromfile(int count = 1);

	void print_all();

	Company search_by_compname(string obj);

	Company search_by_owner(string obj);

	Company search_by_number(string obj);

	Company search_by_occupation(string obj);

	string get_comp() { return Company_name; }
	string get_owner() { return Owner; }
	string get_num() { return Number; }
	string get_addr() { return Adress; }
	string get_occ() { return Occupation; }
};
