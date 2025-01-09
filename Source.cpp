#include "Guidebook.h"
#include <fstream>

int main()
{
	setlocale(LC_ALL, "Russian");

	//// ���� ������ ��������

	//Company test;
	//
	////// ������ ������� � ����
	////test.put_infile();

	////// ������ �� ����� ������ "������" ��������� (��� ���� ��� ������� � �������� � ���� ��� �� ��� �������� � � ������ ����������� �� ����� ������ ������)
	//test.get_fromfile(2);

	////// ���� ������ ��������
	//test.print_all();

	// �������� ������� ������ � ���������� ���������� ��� �������� ���������� �������
	Guidebook test;
	Company comp1("1");
	Company comp2("2");
	Company comp3("3");
	Company comp4("4");

	// ���������� �������
	test.add_company(comp1);
	test.add_company(comp2);
	test.add_company(comp3);
	test.add_company(comp4);

	// ���� ������ ������ ����������
	test.print_all();

	// ���� ������ � ���� ������ ����������
	test.write_infile();

	// ��������� ������� ���������� ��� 
	// ������� ������ ��������������
	// � ����������� ��������
	try
	{
		test.search("5");
	}
	catch (Company_not_exist obj)
	{
		cout << obj.what();
	}

	return 0;
}

