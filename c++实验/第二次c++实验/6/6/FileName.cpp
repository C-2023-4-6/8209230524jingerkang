#include <iostream>
#include <algorithm>
using namespace std;
int gcd(int a, int b)
{
	int t;
	while (a % b != 0)
	{
		t = a % b;
		a = b;
		b = t;
	}
	return b;
}
int c, d;

int main()
{
	int a, b;
	cin >> a >> b;
	cout << "a，b的最大公约数是：" << gcd(a,b) << endl;
	cout << "a，b的最小公倍数是：" << (a * b) / gcd(a, b) << endl;
	return 0;


}