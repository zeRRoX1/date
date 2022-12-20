#include <iostream>
#include "Date.h"
#include "string"
using namespace std;

int main()
{
	Date date(20, 12, 2022);

	//cout << date;
	//cin >> date;
	//cout << date;

	/*string str = "Hello world";
	string str2{"C++ the best"};
	string name(8, 'f');*/

	/*cout << str.size() << " " << str.length() << endl;
	string text;
	getline(cin, text, '!');
	cout << text;*/

	/*getline(istream, str, delim)
		istream - поток ввода
		str - строка, куда записывается значение
		delim - символ разделитель (прекращение ввода. По умолчанию \n)*/
	//at(int i)
	/*cout << str.at(2) << endl;
	//front() back() - первый и последний символы
	cout << str.front() << " " << str.back() << endl;
	// date() - возвращает конст. указатель на основе переданной строки
	const char* arr = str.data();
	cout << arr << endl;

	//методы-итераторы
	// begin() cbegin()
	// end() cend()
	for (auto i = str.begin(); i < str.end(); i++) {
		cout << *i << " ";
	}
	cout << endl;

	//rbegin() rend() - в обратном порядке
	for (auto i = str.rbegin(); i < str.rend(); i++) {
		cout << *i << " ";
	}
	cout << endl;

	//методы поиска
	//find() rfind() - находит первую подстроку и последнюю подстроку
	cout << str.find("el") << endl;
	cout << str.find("el", 4) << endl;
	//find_first_of() find_last_of() - находит первый из строки заданный в () и возвращает его позицию
	cout << str.find_first_of("abc") << endl;
	cout << str.find_last_of("weryuy") << endl;
	//find_first_not_of() find_last_not_of() - находит первый символ который не равен ни одному из переданных параметров
	cout << str.find_first_not_of("hel") << endl;
	cout << str.find_last_not_of("lrd", 4) << endl;
	*/
	//методы редактирования
	//assign() - замена...
	string text = "this is a c++ string";
	string str = text;
	string theStr{ "abcdef" };

	/*cout << text.assign(str) << endl;
	cout << text.assign(str, 3, 4) << endl;
	cout << text.assign("abcdef") << endl;
	cout << text.assign("abcdef", 2) << endl;
	cout << text.assign(5, 'a') << endl;*/
	//clear()
	/*text.clear();
	cout << text << endl;*/
	//erase() - удаление с ... до ...
	/*cout << "|" << str.erase() << "|" << endl;
	str = text;
	cout << "|" << str.erase(3, 10) << "|" << endl;
	str = text;
	str.erase(str.begin() + 1);
	cout << "|" << str << "|" << endl;
	str = text;
	str.erase(str.begin() + 1, str.end() - 3);
	cout << "|" << str << "|" << endl;*/
	//insert() - вставка
	/*cout << str.insert(5, theStr) << endl;
	str = text;
	cout << str.insert(5, theStr, 2, 3) << endl;
	str = text;
	str.insert(str.begin() + 2, 'A');
	cout << str << endl; Эля тюбик*/
	//push_back()
	/*text.push_back('!');
	cout << text;*/
	//pop_back()
	/*text.pop_back();
	cout << text << endl;*/
	//append() - добавить в конец строки указанные символы
	/*cout << str.append("qwert") << endl;
	cout << str.append("Hello world!", 2, 5) << endl;*/
	//replace() - заменяет часть строки на переданную строку
	/*str.replace(10, 3, theStr);
	cout << str << endl;
	str = text;
	str.replace(10, 3, theStr, 2, 2);
	cout << str << endl;
	str = text;
	str.replace(10, 3, "new");
	cout << str << endl;
	str = text;
	str.replace(10, 3, "new", 1, 2);
	cout << str << endl;
	str = text;
	str.replace(10, 3, 3, '!');
	cout << str << endl; 
	str = text;
	str.replace(str.begin() + 10, str.end() - 7, str);
	cout << str << endl;*/
	//substr() - возвращает строку которая является подстрокой исходного текста (строка от ... до ...)
	/*cout << text.substr(5, 9) << endl;
	cout << text.substr(5) << endl;
	cout << text << endl;*/
	//copy() - копирует подстроку с опр позиций 0-ой символ не копируется
	/*char carr[10]{ 0 };
	text.copy(carr, 8, 5);
	cout << carr << endl;*/
	//resize() - задает размер строки
	/*theStr.resize(10, '*');
	cout << theStr << endl;*/
	//swap() - замена местами одной строки с другой 
	/*text.swap(theStr);
	cout << text << endl << theStr << endl;*/

	//методы для работы с совместимостью
	//empty() - true or false
	//size(), length() - длина..
	//max_size()
	//cout << text.max_size() << endl;
	//reserve()
	//capacity() - возвращет количество символов под которое у строки есть выделенное место
	//shrink_to_fit() - уменьшает размер до нужного
	string none;
	cout << text.length() << endl;
	cout << text.size() << endl;
	cout << text.capacity() << endl;
	cout << text.max_size() << endl << endl;

	cout << theStr.length() << endl;
	cout << theStr.size() << endl;
	cout << theStr.capacity() << endl;
	cout << theStr.max_size() << endl << endl;

	cout << none.size() << endl;
	cout << none.capacity() << endl << endl;

	text.reserve(1);
	cout << text << endl;
	cout << text.capacity() << endl << endl;

	text.shrink_to_fit();
	cout << text.capacity() << endl << endl;
}
