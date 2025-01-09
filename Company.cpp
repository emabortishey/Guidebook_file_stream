#include "Company.h"

void Company::put_infile()
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

void Company::put_infile(ofstream& testfile)
{
	testfile << this->get_comp() << ' ';
	testfile << this->get_owner() << ' ';
	testfile << this->get_num() << ' ';
	testfile << this->get_addr() << ' ';
	testfile << this->get_occ() << ' ';
}

void Company::get_fromfile(int count)
{
	string buff;

	ifstream testfile;

	testfile.open("Info.txt");

	if (count != 1)
	{
		for (int i = 1; i <= (count - 1) * 5; i++)
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

void Company::print_all()
{
	cout << "\nCompany name: " << Company_name;
	cout << "\nOwner's name: " << Owner;
	cout << "\nPhone number: " << Number;
	cout << "\nOffice adress: " << Adress;
	cout << "\nOccupation: " << Occupation;
}

Company Company::search_by_compname(string obj)
{
	Company buff;
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
		if (buff.Company_name == obj)
		{
			count++;
		}
	}

	testfile.close();

	return buff;
}

Company Company::search_by_owner(string obj)
{
	Company buff;
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

Company Company::search_by_number(string obj)
{
	Company buff;
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

Company Company::search_by_occupation(string obj)
{
	Company buff;
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