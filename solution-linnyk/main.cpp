/* ----------------------------------------------------------------------------
* Copyright &copy; 2016 Linny Khok <linnykhok@csu.fullerton.edu>
* Released under the [MIT License] (http://opensource.org/license/MIT)
* ------------------------------------------------------------------------*/
#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <set>
#include "excursion.h"
#include "templates.h"
#include "vectors.h"
#include "sets.h"
#include "maps.h"
#include "gcd.h"
#include "fibonnaci.h"
#include "power.h"

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::map;
using std::vector; 
using std::set; 

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
	   } 
	while (x == 'Y' || x == 'y');

	////Templates
	//   m(); 
	//   int a, b;
	//   cout << "Please enter two values and I will tell you the smallest of the two: " << endl;
	//   cin >> a >> b;
	//   cout << "Min(a, b): " << Min(a, b) << endl;

	//   double v1, v2;
	//   cout << "Please enter two decimal values: " << endl;
	//   cin >> v1 >> v2;
	//   cout << "Min(v1, v2): " << Min(v1, v2) << endl;

	//   string str1, str2;
	//   cout << "Please enter two words: " << endl;
	//   cin >> str1;
	//   cin >> str2;
	//   cout << "Min(str1, str2): " << Min(str1, str2) << endl;

	//   //Vectors
	//   vec(num); 
	//   for (int i = 0; i < num.size(); i++) {
	//	   cout << num[i] << " ";
	//   }
	//   cout << endl;
	//   cout << num.front() << " " << num.at(2) << " " << num.back() << endl;

	//   vector<float>::iterator iter;
	//   for (iter = num.begin(); iter != num.end(); iter++) {
	//	   cout << *iter << endl;
	//   }

	   ////Set
	   //set <string> s; 
	   //cout << "Adding 'Hello' and 'There' to the set twice" << endl;
	  
	   //s.insert("Hello");
	   //s.insert("There");
	   //s.insert("Hello");
	   //s.insert("There");
		  // cout << "Set contains:";
		  // while (!s.empty()) {
			 //  s.erase(s.begin());
		   /*}*/
		//Maps
		   cout << "Populating map..." << endl;
		   map <string, char> grades;
		   grades["Dan"] = 'A';
		   grades["Kay"] = 'B';
		   grades["Joe"] = 'F';
		   grades["Brad"] = 'C';

		   cout << "Before any modifications:" << endl;
		   display(grades);

		   grades.erase(grades.find("Joe"));
		   cout << "After deleting a value:" << endl;
		   display(grades);

		   if (grades.count("Dan"))
			   cout << "Dan is a member of grades" << endl;
		   else cout << "Dan is not a member of grades" << endl;
		   if (grades.count("Joe"))
			   cout << "Joe is a member of grades" << endl;
		   else cout << "Joe is not a member of grades" << endl;

		   cout << endl;

		   grades.clear();
		   cout << "After clearing the map:" << endl;
		   display(grades);

		   cin.get();
		   return EXIT_SUCCESS;

		//GCD
		   int a, b;

		   cout << "Input number: ";
		   cin >> a;
		   cout << "Input number: ";
		   cin >> b;

		   cout << " GCD is: " << gcd(a, b) << endl;

		//Fibonnaci sequence
		   cout << fib(10000) << endl;
		//Power Function
		   cout << pow(7, 5) << endl;

	system("pause");
	return 0;

}