#include <iostream>
using namespace std;

int main()
{
    double a, b, c;
    cin >> a >> b >> c;
    if (a+b>c&&a-b<c)
    {
        double C = a + b + c;
        cout << "�����ε��ܳ��ǣ�" << C << endl;
        if (a == b||b==c||a==c)
        {
            cout << "����������һ������������" << endl;
        }
        else
        {
            cout << "�������β��ǵ���������" << endl;
        }
    }
    else
    {
        cout << "�޷�����������" << endl;
    }
  

}