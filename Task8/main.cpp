#include <iostream>
#include <string>
using namespace std;

bool possible(string s, string t) // проверяет на возможность получения t путем передвижений s
{
	int len_s = s.size();
	int len_t = t.size();

	for (int j = 0; j < len_s; j++)
	{
		int i = 0;

		// находим символ s, соответствующий 1 символу t
		if (s[j] == t[i]) {
			int k = j;
			while (s[k] == t[i] && k < len_s - 1 && i < len_t - 1) // передвижение фишки вправо
			{
				k++;
				i++;
			}

			// len == i + 1 значит, что фишка закончила передвижение и t сформ.
			if (i + 1 == len_t && s[k] == t[i]) { 
				return true;
			}
			else {
				if (s[k] == t[i]) { // когда фишка переместилась до последнего символа s
					k++;
					i++;
				}
				k -= 2;
				while (s[k] == t[i] && k > 0 && i < len_t - 1) // передвижение фишки влево
				{
					k--;
					i++;
				}

				if (i + 1 == len_t && s[k] == t[i]) {
					return true;
				}
			}
		}
	}
	return false;
}

int main()
{
	system("color 2");

	int q;
	cout << "enter number of test cases: ";
	while (!(cin >> q) || q < 1) {
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << "enter number of test cases: ";
	}
	cout << endl;

	int sum = 0;
	while (q-- && sum <= 500)
	{
		string s, t;
		
		cout << "enter s:\n";
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cin >> s;
		sum += s.size();

		if (sum > 500) {
			cout << "error! sum > 500, enter again:\n";
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cin >> s;
		}

		cout << "\nenter t:\n";
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cin >> t;

		if (t.size() > 2 * s.size() - 1) {
			cout << "error! |t| > 2*|s|-1, enter again:\n";
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cin >> t;
		}

		if (possible(s, t)) {
			cout << "\nYES\n";
		}
		else {
			cout << "\nNO\n";
		}
	}

	return 0;
}