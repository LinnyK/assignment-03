/* ----------------------------------------------------------------------------
* Copyright &copy; 2016 Linny Khok <linnykhok@csu.fullerton.edu>
* Released under the [MIT License] (http://opensource.org/license/MIT)
* ------------------------------------------------------------------------*/
#include "templates.h"



void m()
{
	template <typename T>
	inline T const& Min(T const& x, T const& y)

	{
		return x > y ? y : x;
	}
}


