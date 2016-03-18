/* ----------------------------------------------------------------------------
* Copyright &copy; 2016 Linny Khok <linnykhok@csu.fullerton.edu>
* Released under the [MIT License] (http://opensource.org/license/MIT)
* ------------------------------------------------------------------------*/
#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int pow_iter(int b, int a)
{
	//base case
	if (a == 1)
		return b;

	//recursive case
	return b * pow(b, a - 1);
}
