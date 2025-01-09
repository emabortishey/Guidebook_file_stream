#include "Guidebook.h"


void Guidebook::print_all()
{
	// с помощью цикла вызывается метод
	// вывода для каждого элемента списка
	for (auto buff : gbook)
	{
		buff.print_all();
		cout << '\n';
	}
}

void Guidebook::write_infile()
{
	// открытие файла в этом методе, обеспечивающая 
	// запись всех элементов, а не только последнего 
	// (т.к. при отсутствии открытия и передачи в метод
	// записи класса компании, при каждом новом открытии
	// файл перезаписывается
	ofstream testfile;

	testfile.open("Info.txt");

	// с помощью цикла для каждого элемента 
	// вызывается метод записи в файл
	for (auto buff : gbook)
	{
		buff.put_infile(testfile);
	}

	testfile.close();
}

void Guidebook::read_file()
{
	// переменная счётчик, которая показывает, какую
	// по счёту группу элементов из файла необходимо 
	// записать в обьект класса
	int count = 1;

	for (auto buff : gbook)
	{
		buff.get_fromfile(count);
		count++;
	}
}

const Company& Guidebook::search(string obj, int num)
{
	for (auto buff : gbook)
	{
		switch (num)
		{
		case SEARCH_BY_COMPANY:
		{
			if (buff.get_comp() == obj)
			{
				return buff;
			}

			break;
		}

		case SEARCH_BY_OWNER:
		{
			if (buff.get_owner() == obj)
			{
				return buff;
			}

			break;
		}
		case SEARCH_BY_NUMBER:
		{
			if (buff.get_num() == obj)
			{
				return buff;
			}

			break;
		}
		case SEARCH_BY_OCCUPATION:
		{
			if (buff.get_occ() == obj)
			{
				return buff;
			}

			break;
		}
		}
	}

	throw Company_not_found("\n\nCompany that u r seekin for isn't exist in current class yet.\n\n");
}