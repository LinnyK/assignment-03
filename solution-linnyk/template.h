#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

//Template
void temp(){
	template <typename T>
	inline T const& Min (T const& x, T const& y)
	{
		/*if (x > y) {
		cout << y;
		}
		else
		cout << x;
		return;*/
		return x > y ? y : x;
	}
}

int main()
{
	temp();
	int a, b;
	cout << "Please enter two values and I will tell you the smallest of the two: " << endl;
	cin >> a >> b;
	cout << "Min(a, b): " << Min(a, b) << endl;

	double v1, v2;
	cout << "Please enter two decimal values: " << endl;
	cin >> v1 >> v2;
	cout << "Min(v1, v2): " << Min(v1, v2) << endl;

	string str1, str2;
	cout << "Please enter two words: " << endl;
	cin >> str1;
	cin >> str2;
	cout << "Min(str1, str2): " << Min(str1, str2) << endl;

	system("pause");
	return 0;



}