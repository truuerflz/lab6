#include <iostream>
#include <string>
using namespace std;

int fact(int n)
{
	if (n == 1) return 1;
    return n * fact(n - 1);
}

// решением задания будет число перестановок слова
int main()
{
	system("color 2");

	string str;
	cout << "enter word: "; cin >> str;
	while (str.size() > 14) {
		cout << "error! the number of letters must be less than 14, enter again: ";
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cin >> str;
	}

	int len = str.size();
	int res = fact(len);

	for (int i = 0; i < len; i++)
	{
		if (str[i] == '.') continue;
		int k = 1;
		for (int j = i + 1; j < len; j++)
		{
			if (str[i] == str[j])
			{
				k++;
				str[j] = '.'; // обозначение использованного символа
			}
		}
		res /= fact(k);
	}

	cout << "\nnumber of anagrams: " << res;

	return 0;
}
