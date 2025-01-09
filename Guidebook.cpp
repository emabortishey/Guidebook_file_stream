#include "Guidebook.h"

void Guidebook::print_all()
{
	for (auto buff : gbook)
	{
		buff.print_all();
		cout << '\n';
	}
}

void Guidebook::write_infile()
{
	ofstream testfile;

	testfile.open("Info.txt");

	for (auto buff : gbook)
	{
		buff.put_infile(testfile);
	}

	testfile.close();
}

void Guidebook::read_file()
{
	int count = 1;

	for (auto buff : gbook)
	{
		buff.get_fromfile(count);
		count++;
	}
}