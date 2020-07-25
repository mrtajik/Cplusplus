// Variables

// int - stores integers (whole numbers), without decimals, such as 123 or -123
// double - stores floating point numbers, with decimals, such as 19.99 or -19.99
// char - stores single characters, such as 'a' or 'B'. Char values are surrounded by single quotes
// string - stores text, such as "Hello World". String values are surrounded by double quotes
// bool - stores values with two states: true or false

#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	int num;
	
	cout <<"Enter any integer number: ";
	cin >>num;
	cout << "Num is "<< num;

	return 0;
}
