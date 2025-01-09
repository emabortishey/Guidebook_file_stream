#pragma once
#include "Company.h"

enum meow { SEARCH_BY_COMPANY = 1, SEARCH_BY_OWNER, SEARCH_BY_NUMBER, SEARCH_BY_OCCUPATION };

using namespace std;

class Guidebook
{
	// список в котором будут храниться поля класса компания
	// в которых содержатся атрибуты с информацией о компании
	list<Company> gbook;

public:
	Guidebook() { };

	// метод добавления нового элемента
	void add_company(Company& new_comp) { gbook.push_back(new_comp); }

	// метод вывода всех элементов
	void print_all();

	// метод записи в файл
	void write_infile();

	// метод взятия из файла
	void read_file();

	const Company& search(string obj, int num = SEARCH_BY_COMPANY)
};