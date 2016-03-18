/* ----------------------------------------------------------------------------
* Copyright &copy; 2016 Linny Khok <linnykhok@csu.fullerton.edu>
* Released under the [MIT License] (http://opensource.org/licenses/MIT)
* ------------------------------------------------------------------------- */

//Code on Sets
#include<iostream>
#include <set>
using std::cout;
using std::cin;
using std::endl;
using std::set;
using std::string;

int main()
{
	set <string> s;
	cout << "Adding 'Hello' and 'There' to the set twice" << endl;

	s.insert("Hello");
	s.insert("There");
	s.insert("Hello");
	s.insert("There");

	cout << "Set contains:";
	while (!s.empty()) {
		//cout << ' ' << *s.begin();
		s.erase(s.begin());
	}
	system("pause");
	return 0;
}
