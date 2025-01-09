#pragma once
#include <iostream>
#include <fstream>
#include <list>
#include <exception>

using namespace std;

class Company
{
	string Company_name;
	string Owner;
	string Number;
	string Adress;
	string Occupation;

public:
	Company() : Company_name{ "Noname" }, Owner{ "John-Doe" }, Number{ "212-85-06" }, Adress{ "Florida" }, Occupation{ "Homeless" } { };
	Company(string comp_P) : Company_name{ comp_P }, Owner{ "John-Doe" }, Number{ "212-85-06" }, Adress{ "Florida" }, Occupation{ "Homeless" } { };
	Company(string comp_P, string name_P) : Company_name{ comp_P }, Owner{ name_P }, Number{ "212-85-06" }, Adress{ "Florida" }, Occupation{ "Homeless" } { };
	Company(string comp_P, string name_P, string num_P) : Company_name{ comp_P }, Owner{ name_P }, Number{ num_P }, Adress{ "Florida" }, Occupation{ "Homeless" } { };
	Company(string comp_P, string name_P, string num_P, string adr_P) : Company_name{ comp_P }, Owner{ name_P }, Number{ num_P }, Adress{ adr_P }, Occupation{ "Homeless" } { };
	Company(string comp_P, string name_P, string num_P, string adr_P, string occ_P) : Company_name{ comp_P }, Owner{ name_P }, Number{ num_P }, Adress{ adr_P }, Occupation{ occ_P } { };

	void set_comp(string comp_P) noexcept { Company_name = comp_P; }
	void set_name(string name_P) noexcept { Owner = name_P; }
	void set_num(string num_P) noexcept { Number = num_P; }
	void set_addr(string addr_P) noexcept { Adress = addr_P; }
	void set_occ(string occ_P) noexcept { Occupation = occ_P; }

	// ����� ������ � ����
	void put_infile() const noexcept;

	// ���������� � ����� ���� ����� ���������� �� 
	// ������ ������ ����������� (�.�. ���� ���� ��� ������,
	// ����� ���� �������� ��� �������� ��� ����������)
	void put_infile(ofstream& testfile) const noexcept;

	// ����� ������ �� ����� � ���������� �� ���������, �������
	// ����������, ����� �� ����� ������ ��������� �� �����
	// ����� ���������� �������� � �������� 
	void get_fromfile(int count = 1) noexcept;

	// ����� ������ ���� ���������
	void print_all() const noexcept;

	// ������ ������ //
	// (������� � �� ��� ������ ������� � �������� ������ ������
	// �� ������ �������� ����� ����� ��������� � �����
	// � ������ ��������, �� ������ �� ��, 
	// ��� ���������� ��� �� �������)

	/*Company search_by_compname(string obj) const noexcept;

	Company search_by_owner(string obj) const noexcept;

	Company search_by_number(string obj) const noexcept;

	Company search_by_occupation(string obj) const noexcept;*/

	string get_comp() const noexcept { return Company_name; }
	string get_owner() const noexcept { return Owner; }
	string get_num() const noexcept { return Number; }
	string get_addr() const noexcept { return Adress; }
	string get_occ() const noexcept { return Occupation; }
};
