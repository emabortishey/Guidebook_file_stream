#pragma once
#include "Company.h"

using namespace std;

class Guidebook
{
	list<Company> gbook;

public:
	Guidebook() { };

	void add_company(Company& new_comp)
	{
		gbook.push_back(new_comp);
	}

	void print_all()
	{
		for (auto buff : gbook)
		{
			buff.print_all();
			cout << '\n';
		}
	}

	void write_infile()
	{
		for (auto buff : gbook)
		{
			buff.put_infile();
		}
	}

	void read_file()
	{
		int count = 1;

		for (auto buff : gbook)
		{
			buff.get_fromfile(count);
			count++;
		}
	}
};