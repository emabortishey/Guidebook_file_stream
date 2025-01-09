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
	void add_company(Company& new_comp) noexcept { gbook.push_back(new_comp); }

	// ����� ������ ���� ���������
	void print_all() const noexcept;

	// ����� ������ � ����
	void write_infile() const noexcept;

	// ����� ������ �� �����
	void read_file() noexcept;

	const Company& search(string obj, int num = SEARCH_BY_COMPANY) const;
};

// ����� ����������������� ����������
// ������� ������������� � ������ �� ����������
// �������� �������� ������� ������ �����������
class Company_not_exist : public exception
{
	string msg;

public:
	Company_not_exist(string msg_P) : msg{ msg_P } { };

	virtual const char* what() const override
	{
		return msg.c_str();
	}
};