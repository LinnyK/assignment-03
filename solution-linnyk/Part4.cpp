/* ----------------------------------------------------------------------------
* Copyright &copy; 2016 Linny Khok <linnykhok@csu.fullerton.edu>
* Released under the [MIT License] (http://opensource.org/licenses/MIT)
* ------------------------------------------------------------------------- */

//Code on GCD
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int gcd(int a, int b)
{
	if (b == 0)
	{
		return a;
	}
	else
	{
		return gcd(b, a % b);
	}
}

int main()
{
	int a, b;

	cout << "Input number: ";
	cin >> a;
	cout << "Input number: ";
	cin >> b;

	cout << " GCD is: " << gcd(a, b) << endl;
	
	system("pause");
	return 0;
}