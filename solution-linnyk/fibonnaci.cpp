#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
/* ----------------------------------------------------------------------------
* Copyright &copy; 2016 Linny Khok <linnykhok@csu.fullerton.edu>
* Released under the [MIT License] (http://opensource.org/license/MIT)
* ------------------------------------------------------------------------*/
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
