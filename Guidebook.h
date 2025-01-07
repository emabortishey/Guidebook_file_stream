#pragma once
#include <iostream>

using namespace std;

class Guidebook
{
	string Company_name;
	string Owner;
	string Number;
	string Adress;
	string Occupation;

public:
	Guidebook(string comp_P, string name_P, string num_P, string adr_P, string occ_P) : Company_name{ comp_P }, Owner{ name_P }, Number{ num_P }, Occupation{ occ_P } { };

	void set_comp(string comp_P) { Company_name = comp_P; }
	void set_name(string name_P) { Owner = name_P; }
	void set_num(string num_P) { Number = num_P; }
	void set_addr(string addr_P) { Adress = addr_P; }
	void set_occ(string occ_P) { Occupation = occ_P; }

	 

	string get_comp() { return Company_name; }
	string get_owner() { return Owner; }
	string get_num() { return Number; }
	string get_addr() { return Adress; }
	string get_occ() { return Occupation; }
};