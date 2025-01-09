#pragma once
#include "Company.h"

enum meow { SEARCH_BY_COMPANY = 1, SEARCH_BY_OWNER, SEARCH_BY_NUMBER, SEARCH_BY_OCCUPATION };

using namespace std;

class Guidebook
{
	// ������ � ������� ����� ��������� ���� ������ ��������
	// � ������� ���������� �������� � ����������� � ��������
	list<Company> gbook;

public:
	Guidebook() { };

	// ����� ���������� ������ ��������
	void add_company(Company& new_comp) { gbook.push_back(new_comp); }

	// ����� ������ ���� ���������
	void print_all();

	// ����� ������ � ����
	void write_infile();

	// ����� ������ �� �����
	void read_file();

	const Company& search(string obj, int num = SEARCH_BY_COMPANY)
};