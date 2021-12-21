/*Найти наибольшее количество предложений текста, 
в которых есть одинаковые слова.*/

#include <iostream>
using namespace std;

int main()
{
	system("color 2");
	setlocale(LC_ALL, "rus");
	cout << "\n\t\tTask: Find the largest number of sentences of text that contain the same words\n\n";

	int size;
	cout << "enter the number of sentences of text: "; cin >> size;
	cout << endl;
	cin.ignore(1, '\n');
	const int a = 15;
	const int symb = 60;
	char text[a][symb];
	
	for (int i = 0; i < size; i++)
	{
		cin.getline(text[i], symb, '\n'); // строки текста
	}
	cout << endl << endl;

	int count = 0; // счетчик предложений с одинаковыми словами
	for (int i = 0; i < size; i++)
	{
		int j = 1;
		int num = 1;
		while (text[i][j - 1] != '\0')
		{
			if (text[i][j] == ' ' && text[i][j + 1] != ' ') // условие нах след слова
			{
				num++;
			}
			j++;
		}

		char** words = new char* [num]; // массив слов в строке
		for (int k = 0; k < num; k++)
		{
			words[k] = new char[60];
		}

		int c = 0; // номер слова
		j = 0;
		while (text[i][j - 1] != '\0')
		{
			int s = 0; // номер символа в слове
			while (text[i][j] != ' ' && text[i][j] != '\0')
			{
				words[c][s] = text[i][j];
				s++;
				j++;
			}
			words[c][s] = '\0';
			c++;
			j++;
		}

		bool keepGoing = true;
		int k = 0;
		while(k < num && keepGoing)
		{
			for (int p = k + 1; p < num; p++)
			{
				if (!strcmp(words[k], words[p]))
				{
					count++;
					cout << "\t" << words[k] << "!!!" << endl;
					keepGoing = false;
					break;
				}
			}
			k++;
		}

		for (int k = 0; k < num; k++)
		{
			delete[] words[k];
		}

		delete[] words;
	}

	cout << endl << "\tthe number of sentences with the same words: " << count << endl;

	/*
	example of sentences:

	dfvfdv BoNe d43vdf BoNe (fits the condition of search) 
	dsc gr hr a34 y h5 fg
	Kuku dc ve Kuku dvds (fits the condition of search)
	ulu dj i i (fits the condition of search)
	*/
	return 0;
}