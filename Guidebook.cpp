#include "Guidebook.h"

// ����� ������ ���� ��������� ������
void Guidebook::print_all() const noexcept
{
	// � ������� ����� ���������� �����
	// ������ ��� ������� �������� ������
	for (auto buff : gbook)
	{
		buff.print_all();
		cout << '\n';
	}
}

// ����� ������ ���� ��������� ������
void Guidebook::write_infile() const noexcept
{
	// �������� ����� � ���� ������, �������������� 
	// ������ ���� ���������, � �� ������ ���������� 
	// (�.�. ��� ���������� �������� � �������� � �����
	// ������ ������ ��������, ��� ������ ����� ��������
	// ���� ����������������
	ofstream testfile;

	testfile.open("Info.txt");

	// � ������� ����� ��� ������� �������� 
	// ���������� ����� ������ � ����
	for (auto buff : gbook)
	{
		buff.put_infile(testfile);
	}

	testfile.close();
}

// ����� ���������� ���� ���������
// � ������� ���������� �� �����
void Guidebook::read_file() noexcept
{
	// ���������� �������, ������� ����������, �����
	// �� ����� ������ ��������� �� ����� ���������� 
	// �������� � ������ ������
	int count = 1;

	for (auto buff : gbook)
	{
		buff.get_fromfile(count);
		count++;
	}
}

// ����� ������ �������� ������ ��
// ��������/�����/������/���� �������
// ������ - ������, ����� ������� �����
// �������������, � ������������� �������� - 
// �� ������ ��������� ����� �����������
// ����� (� ���������� �� � 1 �����, �������
// ������������ ��� ������������� � ����,
// ����� ��������� ���, ���� �� �����
// ���������. �� ��������� ����� 
// ���������� �� �������� ��������
const Company& Guidebook::search(string obj, int num) const
{
	// ���� ��������� �� ���� ��������� ������
	for (auto buff : gbook)
	{
		switch (num)
		{
		// ��������� �������� � ��������������
		case SEARCH_BY_COMPANY:
		{
			// � ������ ��������� ������� �������� ��������
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

	// � ������ ���� ��������� �� ���
	// �� ��������� ������ ������,
	// ������������� ���������� � ���, ���
	// ������� �������� �� ����������
	throw Company_not_exist("\n\nCompany that u r seekin for isn't exist in current class yet.\n\n");
}