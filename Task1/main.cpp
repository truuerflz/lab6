/*���� ������, ��������� �� ����, ����������� ���������.
������� �� ����� ���������� ����� ����� ����������� ����� �
���������� �������� � ���� �����.
*/

#include <iostream>
using namespace std;

int main()
{
	system("color 2");
	setlocale(LC_ALL, "rus");
	cout << "\n\t\tTask: Find a word with minimum length\n\n";

	char str[80]{};
	cout << "enter a string: ";
	cin.clear();
	cin.getline(str, 80);

	int i = 0, k = 0;
	int minLen = 80; // ������� �����
	int countW = 1;  // ������� ����
	int minCount = 1; // ����� �����������
	do
	{
		if ((str[i] == ' ' || str[i] == '\0') && k)
		{
			if (minLen > k)
			{
				minLen = k;
				minCount = countW;
			}
			k = -1; // ����� �������� ����
			countW++;
		}
		if (str[i - 1] != ' ' || str[i] != ' ') // �������� �� ��������� ��������
		{
			k++;
		}
		i++;
	} while (str[i - 1] != '\0');

	cout << endl << "word number " << minCount << " is lesser, its length is " << minLen << endl;

	return 0;
}