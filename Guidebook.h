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

	void put_infile(Guidebook* obj)
	{
		ofstream testfile;

		testfile.open("Info.txt");

		testfile.write(obj->get_comp(), sizeof(obj->get_comp()) / sizeof(char));
		testfile.write((char*)&" ", sizeof " ");
		testfile.write(obj->get_owner(), sizeof(obj->get_owner()) / sizeof(char));
		testfile.write((char*)&" ", sizeof " ");
		testfile.write(obj->get_num(), sizeof(obj->get_num()) / sizeof(char));
		testfile.write((char*)&" ", sizeof " ");
		testfile.write(obj->get_addr(), sizeof(obj->get_addr()) / sizeof(char));
		testfile.write((char*)&" ", sizeof " ");
		testfile.write(obj->get_occ(), sizeof(obj->get_occ()) / sizeof(char));
		testfile.write((char*)&" ", sizeof " ");

		testfile.close();
	}

	const char* get_comp() { return Company_name.c_str(); }
	const char* get_owner() { return Owner.c_str(); }
	const char* get_num() { return Number.c_str(); }
	const char* get_addr() { return Adress.c_str(); }
	const char* get_occ() { return Occupation.c_str(); }
};