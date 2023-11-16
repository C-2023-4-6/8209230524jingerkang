#include <iostream>
using namespace std;

int main()
{
	double x,y;
	cin >> x;
	if (0 < x&& x < 1)
	{
		y = - (2 * x)+3;
		cout << "y=" << y << endl;
	}
	else if (1 <= x&& x < 5)d
	{
		y = 2/ (4 * x)+1;
		cout << "y=" << y << endl;
	}
	else (5 <= x&& x < 10);
	{
		y = x * x;
		cout << "y=" << y << endl;
	}
	return 0;

}