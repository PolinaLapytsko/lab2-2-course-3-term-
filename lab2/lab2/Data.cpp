#include "Data.h"
#include <iostream>
#include <string>
#include <Windows.h>

using namespace std;

void Data::setTheme(const string& newTheme)
{
	theme = newTheme;
}

void Data::setAuthor(const string& newAuthor)
{
	author = newAuthor;
}

void Data::setMonth(const string& newMonth)
{
	month = newMonth;
}

void Data::set(const string& newTheme,
	const string& newAuthor,
	const string& newMonth)
{
	theme = newTheme;
	author = newAuthor;
	month = newMonth;
}

void Data::print() const
{
	cout << "Theme: " << theme << endl;
	cout << "Author: " << author << endl;
	cout << "Month: " << month << endl;
}


Data::Data()
{
	cout << "Constructor is working now " << endl;
	theme = "";
	month = "";
	author = "";
	system("pause");
}

Data::~Data() 
{
	cout << "Destructor is working now" << endl;
	system("pause");
}

Data::Data(const string& theme,
	const string& author,
	const string& month) : theme(theme), author(author), month(month) //переменной класса присваивается аргумент метода (список инициализации)
{
	cout << "Constructor with parameters is working now" << endl;
	system("pause");
}

Data::Data(const Data& obj)
{
	cout << "Constructor copy is working now " << endl;
	set(obj.getTheme(), obj.getAuthor(), obj.getMonth());
	system("pause");
}

string Data::getAuthor() const
{
	return author;
}

string Data::getTheme() const
{
	return theme;
}

string Data::getMonth() const
{
	return month;
}
