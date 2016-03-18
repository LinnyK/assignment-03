#include <iostream>
#include "maps.h"
#include <map>
#include <string>
#include <iomanip> 

/* ----------------------------------------------------------------------------
* Copyright &copy; 2016 Linny Khok <linnykhok@csu.fullerton.edu>
* Released under the [MIT License] (http://opensource.org/license/MIT)
* ------------------------------------------------------------------------*/
using std::string;
using std::map;
using std::cout;
using std::cin;
using std::endl;
using std::setw; 


void display(map <string, char> grades){
	cout << "\tTotal size: " << grades.size() << endl;

	map <string, char>::iterator it;
	for (it = grades.begin(); it != grades.end(); ++it)

		cout << setw(10) << it->first << setw(5) << it->second << endl;

	cout << endl;

}