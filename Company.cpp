#include "Company.h"

// метод записи в файл
void Company::put_infile()
{
	// создание обьекта класса для записи
	ofstream testfile;

	// открытие файла
	testfile.open("Info.txt");

	// запись всех атрибутов в файл через пробел
	testfile << Company_name << ' ';
	testfile << Owner << ' ';
	testfile << Number << ' ';
	testfile << Adress << ' ';
	testfile << Occupation << ' ';

	// закрытие файла
	testfile.close();
}

// перегрузка метода записи в файл, принимающая уже открытый файл
void Company::put_infile(ofstream& testfile)
{
	testfile << this->get_comp() << ' ';
	testfile << this->get_owner() << ' ';
	testfile << this->get_num() << ' ';
	testfile << this->get_addr() << ' ';
	testfile << this->get_occ() << ' ';
}

// метод взятия из файла содержащий парамент каунт по умолчанию
void Company::get_fromfile(int count)
{
	// буферная строка в которую будет записываться всё до
	// нахождения нужной группы элементов файла
	string buff;

	// создание переменной файла для чтения
	ifstream testfile;

	// открытие файла
	testfile.open("Info.txt");

	// если каунт равен 1 (нужна первая группа элементов, т.е. цикл не небходим) цикл пропускается
	if (count != 1)
	{
		// считывает все элементы предыдущих 
		// групп в файле пока не достигнет нужной
		for (int i = 1; i <= (count - 1) * 5; i++)
		{
			testfile >> buff;
		}
	}

	// когда произошел выход из цикла, 
	// происходит запись следующий 5 элементов
	// которые и будут являться нужной группой
	testfile >> Company_name;
	testfile >> Owner;
	testfile >> Number;
	testfile >> Adress;
	testfile >> Occupation;

	// закрытие файла
	testfile.close();
}

// метод вывода всех атрибутов на экран
void Company::print_all()
{
	cout << "\nCompany name: " << Company_name;
	cout << "\nOwner's name: " << Owner;
	cout << "\nPhone number: " << Number;
	cout << "\nOffice adress: " << Adress;
	cout << "\nOccupation: " << Occupation;
}

// сначала я не так поняла задание и написала методы поиска
// по одному атрибуту среди групп элементов в файле
// и решила оставить, не смотря на то, 
// что переделала по уже заданию

//Company Company::search_by_compname(string obj)
//{
//	Company buff;
//	ifstream testfile;
//	int count = 0;
//
//	testfile.open("Info.txt");
//
//	while (count == 0)
//	{
//		testfile >> buff.Company_name;
//		testfile >> buff.Owner;
//		testfile >> buff.Number;
//		testfile >> buff.Adress;
//		testfile >> buff.Occupation;
//		if (buff.Company_name == obj)
//		{
//			count++;
//		}
//	}
//
//	testfile.close();
//
//	return buff;
//}
//
//Company Company::search_by_owner(string obj)
//{
//	Company buff;
//	ifstream testfile;
//	int count = 0;
//
//	testfile.open("Info.txt");
//
//	while (count == 0)
//	{
//		testfile >> buff.Company_name;
//		testfile >> buff.Owner;
//		testfile >> buff.Number;
//		testfile >> buff.Adress;
//		testfile >> buff.Occupation;
//		if (buff.Owner == obj)
//		{
//			count++;
//		}
//	}
//
//	testfile.close();
//
//	return buff;
//}
//
//Company Company::search_by_number(string obj)
//{
//	Company buff;
//	ifstream testfile;
//	int count = 0;
//
//	testfile.open("Info.txt");
//
//	while (count == 0)
//	{
//		testfile >> buff.Company_name;
//		testfile >> buff.Owner;
//		testfile >> buff.Number;
//		testfile >> buff.Adress;
//		testfile >> buff.Occupation;
//		if (buff.Number == obj)
//		{
//			count++;
//		}
//	}
//
//	testfile.close();
//
//	return buff;
//}
//
//Company Company::search_by_occupation(string obj)
//{
//	Company buff;
//	ifstream testfile;
//	int count = 0;
//
//	testfile.open("Info.txt");
//
//	while (count == 0)
//	{
//		testfile >> buff.Company_name;
//		testfile >> buff.Owner;
//		testfile >> buff.Number;
//		testfile >> buff.Adress;
//		testfile >> buff.Occupation;
//		if (buff.Occupation == obj)
//		{
//			count++;
//		}
//	}
//
//	testfile.close();
//
//	return buff;
//}