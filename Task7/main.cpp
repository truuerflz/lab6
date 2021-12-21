#include <iostream>
#include <string>
using namespace std;

bool IsPalindrom(string s) {
	int s_size = s.size();
	for (int i = 0; i < s_size / 2; i++) {
		if (s[i] != s[s_size - i - 1]) {
			return false;
		}
	}
	return true;
}

int main()
{
	system("color 2");

	string str;
	cout << "enter word: "; cin >> str;
	while (str.size() > 105) {
		cout << "error! the number of letters must be less than 14, enter again: ";
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cin >> str;
	}
	int len = str.size(); // если строка не палиндром, то она и явл. макс.

	if (IsPalindrom(str)) // достаточно удалить один символ, чтобы не была палиндромом
	{
		len -= 1;
	}

	bool end = true;
	for (int i = 1; i < len; i++)
	{
		if (str[0] != str[i]) {
			end = false;
			break;
		}
	}
	if (end) {
		// строка состоит из одинаковых символов, любая подстрока - палиндром
		cout << "\n-1\n";
		return 0;
	}

	cout << "\nlength of max substring(not palindrome) is " << len << endl;
	return 0;
}