#include <iostream>
using namespace std;
int gys(int a, int b,int x)
{
	x = min(a, b);
	while (x > 1 && (a % x != 0 || b % x != 0))
		x--;
	return x;
}
int main()
{
	
	int c;
	int d;
	cout << "�������������֣�" << endl;
	cin >> c >> d;
	int t=min(c,d);
	gys(c,d,t);
	cout << "�������ֵ����Լ���ǣ�" << t << endl;
	int &f = t; 
	cout << "�������ֵ����Լ���ǣ�" << f << endl;
	int e = c * d;
	int g = e / t;
	int& i = g;
	cout << "�������ֵ���С�������ǣ�" << i << endl;

	return 0;

}