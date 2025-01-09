#include "Guidebook.h"

// метод вывода всех элементов списка
void Guidebook::print_all() const noexcept
{
	// с помощью цикла вызывается метод
	// вывода для каждого элемента списка
	for (auto buff : gbook)
	{
		buff.print_all();
		cout << '\n';
	}
}

// метод записи всех элементов списка
void Guidebook::write_infile() const noexcept
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

// метод перезаписи всех элементов
// с помощью информации из файла
void Guidebook::read_file() noexcept
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

// метод поиска элемента списка по
// компании/имени/номеру/роду занятия
// обьект - строка, поиск которой будет
// производиться, а целочисленный парамент - 
// по какому аргументу будет происходить
// поиск (я объеденила всё в 1 класс, добавив
// перечисления для читабельности и свич,
// чтобы сократить код, ведь он почти
// идентичен. по умолчанию поиск 
// происходит по названию компании
const Company& Guidebook::search(string obj, int num) const
{
	// цикл пробегает по всем элементам списка
	for (auto buff : gbook)
	{
		switch (num)
		{
		// сравнение значения с перечислениями
		case SEARCH_BY_COMPANY:
		{
			// в случае равенства возврат текущего элемента
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

	// в случае если программа до сих
	// не завершила работу метода,
	// выбрасывается исключение о том, что
	// искомая компания не существует
	throw Company_not_exist("\n\nCompany that u r seekin for isn't exist in current class yet.\n\n");
}