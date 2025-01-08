#include "Guidebook.h"
#include <fstream>

int main()
{
	setlocale(LC_ALL, "Russian");

	Guidebook test;
	
	test.put_infile();

	test.get_fromfile(2);

	test.print_all();

	return 0;
}

