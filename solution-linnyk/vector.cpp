/* ----------------------------------------------------------------------------
* Copyright &copy; 2016 Linny Khok <linnykhok@csu.fullerton.edu>
* Released under the [MIT License] (http://opensource.org/licenses/MIT)
* ------------------------------------------------------------------------- */

//Code on Vectors
#include <vector>
#include <iostream>

using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::string;

int main() {
	vector<float> num;

	num.assign(8, 57);
	num[2] = 15.7; num[3] = 20.6;
	num.push_back(21.5);
	num.push_back(-7.5);

	for (int i = 0; i < num.size(); i++) {
		cout << num[i] << " ";
	}
	cout << endl;
	cout << num.front() << " " << num.at(2) << " " << num.back() << endl;

	vector<float>::iterator iter;
	for (iter = num.begin(); iter != num.end(); iter++) {
		cout << *iter << endl;
	}
	system("pause");
	return 0;
}