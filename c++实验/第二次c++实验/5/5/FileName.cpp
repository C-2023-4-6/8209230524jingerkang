#include <iostream>
using namespace std;

int main()
{
	char a;
	int number = 0;
	int space = 0;
	int letter = 0;
	int other = 0;

	while ((a = getchar()) && a != '\n')
	{
		if (a >= '0' && a <= '9')
			number++;
		else if (a == ' ')
			space++;
		else if (a >= 'A' && a <= 'z')
			letter++;
		else other++;
	}
	cout << "���ָ���Ϊ��" << number << endl;
	cout << "�ո����Ϊ��" <<space<<endl;
	cout << "��ĸ����Ϊ��" <<letter<<endl;
	cout << "��������Ϊ��" <<other<<endl;
}
