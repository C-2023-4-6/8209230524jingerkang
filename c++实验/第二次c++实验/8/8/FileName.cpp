#include <iostream>
using namespace std;

int main()
	{
	int a;
	cin >> a;
	double i=a;
	double j = (i + a / i) / 2;
	for(i,j;abs(i-j) >= 10e-5; i = j,j=(i+a/i)/2){ }

	cout << "a的平方根是：" << j << endl;


	}
