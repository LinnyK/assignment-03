/* ----------------------------------------------------------------------------
* Copyright &copy; 2016 Linny Khok <linnykhok@csu.fullerton.edu>
* Released under the [MIT License] (http://opensource.org/license/MIT)
* ------------------------------------------------------------------------*/
#include "vectors.h"
#include <vector>
#include <iostream>

using std::vector;
using std::string;
using std::cout;
using std::endl;

void vec(float num)
{
	vector <float> num;  

	num.assign(8, 57);
	num[2] = 15.7; num[3] = 20.6;
	num.push_back(21.5);
	num.push_back(-7.5);


}