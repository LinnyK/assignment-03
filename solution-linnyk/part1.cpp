/* ----------------------------------------------------------------------------
* Copyright &copy; 2016 Linny Khok <linnykhok@csu.fullerton.edu>
* Released under the [MIT License] (http://opensource.org/licenses/MIT)
* ------------------------------------------------------------------------- */

//Excursions
#include<iostream>
#include"template.cpp"
#include "set.cpp"
#include"maps.cpp"
#include"vector.cpp"
#include<string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

 void RomanNum(int num) {
	string Roman = " ";

	switch (num) {
	case 40:
		Roman += "XL";
		num -= 40;
		break;

	case 90:
		Roman += "XC";
		num -= 90;
		break;

	}
	if (num >= 1000) {
		Roman += string(num / 1000, 'M');
		num %= 1000;

	}

	if (num >= 500) {
		Roman += string(num / 500, 'D');
		num %= 500;

	}

	if (num >= 100) {
		Roman += string(num / 100, 'C');
		num %= 100;

	}
	if (num >= 50) {
		Roman += string(num / 50, 'L');
		num %= 50;

	}
	if (num >= 10) {
		Roman += string(num / 10, 'X');
		num %= 10;

	}
	if (num >= 5) {
		Roman += string(num / 5, 'V');
		num %= 5;

	}
	if (num >= 1) {
		Roman += string(num / 1, 'I');
		num %= 1;
	}

	cout << Roman << endl;
}

 int main()
 {

	 char x;
	 int num1;
	 do {

		 cout << "Please enter an integer: " << endl;
		 cin >> num1;
		 RomanNum(num1);

		 cout << "Would you like to convert another integer (Y/N)?";
		 cin >> x;

	 } while (x == 'Y' || x == 'y');

	 try
	 	{
	 		throw "negative";
	 	}
	 	catch (int)
	 	{
	 		// Any exceptions of type int thrown within the above try block get sent here
	 		std:: cerr << "We caught an exception of type int" << endl;
	 	}

	 system("pause");
	 return 0;
 }