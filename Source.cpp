#include "Guidebook.h"
#include <fstream>

int main()
{
	setlocale(LC_ALL, "Russian");

	//// тест класса компания

	//Company test;
	//
	////// запись обьекта в файл
	////test.put_infile();

	////// запись из файла второй "группы" элементов (был тест при котором я записала в файл как бы два элемента и в обьект записывался из файла только второй)
	//test.get_fromfile(2);

	////// тест вывода компании
	//test.print_all();

	// создание обьекта класса и заполнение переменных для будущего заполнения обьекта
	Guidebook test;
	Company comp1("1");
	Company comp2("2");
	Company comp3("3");
	Company comp4("4");

	// заполнение обьекта
	test.add_company(comp1);
	test.add_company(comp2);
	test.add_company(comp3);
	test.add_company(comp4);

	// тест вывода класса справочник
	test.print_all();

	// тест записи в файл класса справочник
	test.write_infile();

	// испытание выброса исключения при 
	// попытке поиска несуществующей
	// в справочнике компании
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

