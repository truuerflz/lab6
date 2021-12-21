#include <iostream>
#include <string>
using namespace std;

int main()
{
	system("color 2");

	int t;
	cout << "enter number of test cases: ";
	while (!(cin >> t) || t < 1) {
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << "enter number of test cases: ";
	}
	cout << endl;

	while (t--)
	{
		unsigned short m;
		unsigned long L;
		string S1, S2;

		cout << "enter length of result and divider:\n";
		while (!(cin >> L >> m)) {
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout << "enter length of result and divider:\n";
		}
		cout << endl;
		cin.ignore(numeric_limits<streamsize>::max(), '\n');

		cout << "enter S1:\n";
		cin >> S1;
		if (S1.length() > 200) {
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout << "error! enter S1 again:\n"; cin >> S1;
		}
		cout << endl;
		cin.ignore(numeric_limits<streamsize>::max(), '\n');

		cout << "enter S2:\n";
		cin >> S2;
		if (S2.length() > 200) {
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout << "error! enter S2 again:\n"; cin >> S2;
		}

		int len1 = S1.length();
		int len2 = S2.length();

		if ((S1.length() + S2.length()) > L) // ������, ����� �������� ������ ��������� ����� ������ � ������
		{
			int pos = L - len2; // ������� � ����� ������� S1, ��� ������� S1 � S2 ������ ���������
			bool so = true;
			int k = 0;

			for (int i = pos; i < len1; i++)
			{
				if (S1[i] != S2[i - pos]) {
					so = false;
				}
			}

			if (so) k++;

			pos = L - len1;
			so = true;

			for (int i = pos; i < len2; i++) // ������ ������� S1 ������ � ������ S2
			{
				if (S2[i] != S1[i - pos]) {
					so = false;
				}
			}

			if (so) k++;

			cout << "\nResult: number of strings is " << k << endl << endl;
		}
		else if ((S1.length() + S2.length()) == L) // � ������ ������ ����� ������ �������� ������� S1 � S2, anyway ��������� 2
		{
			cout << "\nResult: number of strings is 2" << endl << endl;
		}
		else // ����� ����� S1 � S2 ���� ��������� ������������
		{
			int empty = L - len1 - len2;
			int res = (long long)(pow(26, empty) * 2) % m; // �������� �� 2 �.�. S1 � S2 �������� �������
			cout << "\nResult: number of strings is " << res << endl << endl;
		}
	}

	return 0;
}