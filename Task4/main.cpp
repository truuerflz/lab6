/*Too swift for Theex, too quick for Gallow, Too strong for young Prince Joseph to follow.*/

#include <iostream>
using namespace std;

int main()
{
	system("color 2");

	int size = 101;
	char* text = new char[size];
	cout << "\tenter a text:\n";
	cin.clear();
	cin.getline(text, size);

	size = strlen(text);
	int space = 0;
	for (int i = 0; i < size + space; i++)
	{
		if (text[i] == 'c') {
			if (text[i + 1] == 'e' || text[i + 1] == 'i' || text[i + 1] == 'y') {
				text[i] = 's';
			}
			else {
				text[i] = 'k';
			}
		}

		if (text[i] == 'C') {
			if (text[i + 1] == 'e' || text[i + 1] == 'i' || text[i + 1] == 'y') {
				text[i] = 'S';
			}
			else {
				text[i] = 'K';
			}
		}

		if (text[i] == 'q') {
			text[i] = 'k';
			if (text[i + 1] == 'u') {
				text[i + 1] = 'v';
			}
		}

		if (text[i] == 'Q') {
			text[i] = 'K';
			if (text[i + 1] == 'u') {
				text[i + 1] = 'v';
			}
		}

		if (text[i] == 'x') {
			space++;
			for (int m = size; m > i; m--) {
				text[m] = text[m - 1];
			}
			text[i] = 'k';
			text[i + 1] = 's';
		}

		if (text[i] == 'X') {
			space++;
			for (int m = size; m > i; m--) {
				text[m] = text[m - 1];
			}
			text[i] = 'K';
			text[i + 1] = 's';
		}

		if (text[i] == 'w')
		{
			text[i] = 'v';
		}

		if (text[i] == 'W')
		{
			text[i] = 'V';
		}

		if (text[i] == 'p' && text[i + 1] == 'h')
		{
			space--;
			for (int m = i + 1; m < size - 1; m++) {
				text[m] = text[m + 1];
			}
			text[i] = 'f';
		}

		if (text[i] == 'P' && text[i + 1] == 'h')
		{
			space--;
			for (int m = i + 1; m < size - 1; m++) {
				text[m] = text[m + 1];
			}
			text[i] = 'F';
		}

		if ((text[i] == 'y' && text[i + 1] == 'o' && text[i + 2] == 'u') || (text[i] == 'o' && text[i + 1] == 'o'))
		{
			if (text[i] == 'y') {
				space -= 2;
				for (int m = i + 1; m < size - 2; m++) {
					text[m] = text[m + 2];
				}
			}
			else {
				space--;
				for (int m = i + 1; m < size - 1; m++) {
					text[m] = text[m + 1];
				}
			}
			text[i] = 'u';
		}

		if ((text[i] == 'Y' && text[i + 1] == 'o' && text[i + 2] == 'u') || (text[i] == 'O' && text[i + 1] == 'o'))
		{
			if (text[i] == 'Y') {
				space -= 2;
				for (int m = i + 1; m < size - 2; m++) {
					text[m] = text[m + 2];
				}
			}
			else {
				space--;
				for (int m = i + 1; m < size - 1; m++) {
					text[m] = text[m + 1];
				}
			}
			text[i] = 'U';
		}

		if (text[i] == 'e' && text[i + 1] == 'e')
		{
			space--;
			for (int m = i + 1; m < size - 1; m++) {
				text[m] = text[m + 1];
			}
			text[i] = 'i';
		}

		if (text[i] == 'E' && text[i + 1] == 'e')
		{
			space--;
			for (int m = i + 1; m < size - 1; m++) {
				text[m] = text[m + 1];
			}
			text[i] = 'I';
		}

		if (text[i] == 't' && text[i + 1] == 'h')
		{
			space--;
			for (int m = i + 1; m < size - 1; m++) {
				text[m] = text[m + 1];
			}
			text[i] = 'z';
		}

		if (text[i] == 'T' && text[i + 1] == 'h')
		{
			space--;
			for (int m = i + 1; m < size - 1; m++) {
				text[m] = text[m + 1];
			}
			text[i] = 'Z';
		}

		if (text[i] == text[i + 1])
		{
			space--;
			for (int m = i + 1; m < size - 1; m++) {
				text[m] = text[m + 1];
			}
		}
	}

	text[size + space + 1] = '\0';
	cout << endl << "\tresult:\n" << text << endl;

	delete[] text;

	return 0;
}
