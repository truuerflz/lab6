#include <iostream>
#include <string>
using namespace std;

int main()
{
	system("color 2");

	string str;
	cout << "enter string:\n";
	cin.clear();
	cin >> str;

	int i = -1;
	unsigned long long sum = 0;
	int len = str.size();

	while (i < len)
	{
		int k = 0;
		char s[255]{};

		// поиск цифр и запись в s
		while (str[++i] >= 48 && str[i] <= 57) {
			s[k] = str[i];
			k++;
		}
		sum += atoi(s); // преобразование в int
	}

	cout << endl << "sum of numbers: " << sum << endl;

	return 0;
}