#pragma once
#include "Company.h"

using namespace std;

class Guidebook
{
	list<Company> gbook;

public:
	Guidebook() { };

	void add_company(Company& new_comp) { gbook.push_back(new_comp); }

	void print_all();

	void write_infile();

	void read_file();
};