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
	cout << "a��b�����Լ���ǣ�" << gcd(a,b) << endl;
	cout << "a��b����С�������ǣ�" << (a * b) / gcd(a, b) << endl;
	return 0;


}