#include <iostream>
using namespace std;

int main() 
{
	char a[1001];
	cin >> a;
	int length;
	length = strlen(a);
    for(int i=0;i<length;i++)
		if (a[i] >= 'a' && a[i] <= 'z') {
			a[i] = a[i] - 32;
		}
		else {
			cout << (int)++a[i] << endl;
		}
	cout << a << endl;

}