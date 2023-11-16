#include <iostream>
using namespace std;

int main()
{
	double a, b;
	cin >> a >> b;
	cout << a + b << endl;
	cout << a - b << endl;
	cout << a * b << endl;
	if (b < 0 || b>0)
	{
		cout << a / b << endl;
	}
	else cout << "除数不能为0" << endl;
	int c, d;
	cin >> c >> d;
	cout << c % d << endl;



}