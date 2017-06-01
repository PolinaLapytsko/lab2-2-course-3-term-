#include <string>
#include <Windows.h>
#include <iostream>

using namespace std;

class Data
{
private:
	string theme;
	string author;
	string month;
public:
	Data();
	Data(const string& theme, const string& author, const string& month); 
	Data(const Data& obj);

	~Data();

	void setTheme(const string& newTheme);
	void setAuthor(const string& newAuthor);
	void setMonth(const string& newMonth);

	void print() const; 
	void set(const string& newTheme,
		const string& newAuthor,
		const string& newMonth); 

	string getAuthor() const; 
	string getTheme() const;
	string getMonth() const; 
};