/*������ ������ ��������.
 ����� ����� ����� ������ ������ ���� ������ ���� #,
 ��������� �������� �������� ������ ���������� ������ ������;
 k ������ # �������� k ���������� ����� (���� ����� ����).
 ������������� ������ � ������ ���� ����� #.
 ��������, ������ �VR##Y#HELO#LO� ������ ���� ���������� � ����: �HELLO�.
 */

#include <iostream>
#include <string>
using namespace std;

int main()
{
	system("color 2");
	setlocale(LC_ALL, "rus");
	cout << "\n\t\tTask: Convert string with # sign\n\n";

	cout << "\tenter a string:\n";
	cin.clear();

	string str;
	getline(cin, str);
	char result[50];
	int length = 0;
	
	for (int i = 0; str[i] != '\0'; i++)
	{
		length++;
	}

	int i = 0;
	int m = 0;
	int f = 0;
	while (i < length)
	{
		int k = 0; // ����� �������� (�� #)
		int sharp = 0; // ����� #
		while ((str[i] != '#' || str[i + 1] == '#') && str[i + 1] != '\0') // �������� �� ����� ���� #
		{
			if (str[i] == '#')
			{
				sharp++;
			}
			else
			{
				k++;
			}
			i++;
		}

		if (str[i] == '#' || str[i + 1] != '\0') // ��� ���������� # 
		{
			sharp++;
		}
		else // ��� ����� ������
		{
			k++;
		}
		i++;
		
		int symb = k - sharp; 
		for (int j = m; j < symb + m; j++)
		{
			result[j] = str[f++];
		}

		if (symb > 0)
		{
			m += symb;
		}
		f = i;
	}
	result[m] = str[i]; // �� �������� ��� '\0'

	cout << endl << "\tresult:\n" << result << endl;

	return 0;
}