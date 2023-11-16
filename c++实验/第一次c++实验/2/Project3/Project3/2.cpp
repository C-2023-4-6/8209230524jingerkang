#include<iostream>
using namespace std;
int main()
{
	double h,r;
	double pi= 3.14;
	cout << "请输入圆锥的底和高" << endl;
	cin >> r>>h;
	double V = (pi * r*r)/3;
	cout << "圆锥的体积是：" << V << endl;
}
