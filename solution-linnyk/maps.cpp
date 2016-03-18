/* ----------------------------------------------------------------------------
* Copyright &copy; 2016 Linny Khok <linnykhok@csu.fullerton.edu>
* Released under the [MIT License] (http://opensource.org/licenses/MIT)
* ------------------------------------------------------------------------- */

//Code on Maps
#include <iostream>
#include <iomanip>
#include <map>

using std::cout;
using std::cin;
using std::endl;
using std::map;
using std::string;

void display(map <string, char> grades)
{
	cout << "\tTotal size: " << grades.size() << endl; 
	
	map <string, char>::iterator it;
	for (it = grades.begin(); it != grades.end(); ++it)
		
		cout << setw(10) << it->first << setw(5) << it->second << endl;

	cout << endl; 
}

int main()
{
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
}
