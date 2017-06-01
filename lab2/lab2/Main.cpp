#include "Data.h"
#include <cstdlib>
#include <iostream>
#include <Windows.h>
#include <string>

using namespace std;

int Menu()
{
	cout << endl;
	cout << "1 - Add advertising" << endl;
	cout << "2 - Review" << endl;
	cout << "3 - Searching" << endl;
	cout << "4 - Changing" << endl;
	cout << "5 - End of work" << endl;
	cout << "Your choice is: " << endl;
	int choice;
	cin >> choice;
	return choice;
}

void main()
{
	int i = 0, n = 1;
	Data* mas = new Data[n]; // массив объектов
	bool b = true;
	while (b) {
		int choice = Menu();
		switch (choice)
		{
		case 1:
		{
				  system("cls");
				  string theme, author, month;
				  fflush(stdin);
				  cout << "Theme: ";
				  getline(cin, theme);
				  cout << "Author: ";
				  getline(cin, author);
				  cout << "Month: ";
				  getline(cin, month);

				  if (i == n)
				  {
					  n *= 2;   
					  Data* tmp = new Data[n]; 
					  for (int j = 0; j < i; j++)
						  tmp[j] = Data(mas[j]); 
					  delete[] mas; 
					  mas = tmp; 
				  }

				  mas[i] = Data(theme, author, month); 
				  i++;
				  system("cls");
				  break;
		}
		case 2:
		{
				  system("cls");
				  for (int j = 0; j < i; j++) {
					  cout << endl;
					  mas[j].print();
				  }
				  break;
		}
		case 3:
		{
				  system("cls");
				  string themeToFind;
				  cout << "Theme to find: ";
				  fflush(stdin);
				  getline(cin, themeToFind);
				  int cnt = 0;
				  for (int j = 0; j < i; j++)
				  if (mas[j].getTheme() == themeToFind) {
					  mas[j].print();
					  cnt++;
				  }
				  if (cnt == 0)
					  cout << "Not found" << endl;
				  break;
		}
		case 4:
		{
				  system("cls");
				  int num = 0;
				  cout << "Enter the number of element: ";
				  cin >> num;

				  if (num < 1) {
					  cout << "Please enter positive number" << endl;
					  break;
				  }

				  if (num > i) {
					  cout << "There is only " << i << " elements!" << endl;
					  break;
				  }

				  num--;

				  string theme, author, month;
				  fflush(stdin);
				  cout << "Theme: ";
				  getline(cin, theme);
				  mas[num].setTheme(theme);
				  cout << "Author: ";
				  getline(cin, author);
				  mas[num].setAuthor(author);
				  cout << "Month: ";
				  getline(cin, month);
				  mas[num].setMonth(month);
				  break;
		}
		case 5:
		{
				  cout << "Thank you! Good buy!" << endl;
				  b = false;
				  break;
		}
		}
	}
}