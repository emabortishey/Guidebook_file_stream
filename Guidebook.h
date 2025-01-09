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
	void add_company(Company& new_comp) noexcept { gbook.push_back(new_comp); }

	// метод вывода всех элементов
	void print_all() const noexcept;

	// метод записи в файл
	void write_infile() const noexcept;

	// метод взятия из файла
	void read_file() noexcept;

	const Company& search(string obj, int num = SEARCH_BY_COMPANY) const;
};

// класс пользовательского исключения
// который выбрасывается в случае не нахождения
// искомого элемента методом поиска справочника
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