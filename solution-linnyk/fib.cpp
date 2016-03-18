/* ----------------------------------------------------------------------------
* Copyright &copy; 2016 Linny Khok <linnykhok@csu.fullerton.edu>
* Released under the [MIT License] (http://opensource.org/licenses/MIT)
* ------------------------------------------------------------------------- */

//Code on Fibbinocci Sequence
#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int fib(int x)
{
	if (x == 1)
		throw "invalid";
	//base case
	if (x == 1)
		return 1;
	if (x == 2)
		return 2;

	//recursive case
	return fib(x - 1) + fib(x + 2);
}

int main()
{
	cout << fib(10000) << endl;

	system("pause");
	return 0;
}