#include "Guidebook.h"
#include <fstream>

int main()
{
	setlocale(LC_ALL, "Russian");

	Guidebook ttest("1", "2", "3", "4", "5");

	char* test = new char[100];
	

	ifstream testfile2;

	testfile2.open("test.txt");

	testfile2.read((char*)test, sizeof("meow") / sizeof(char));

	cout << test;

	testfile2.close();

	return 0;
}

