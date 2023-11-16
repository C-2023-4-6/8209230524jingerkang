#include <iostream>
using namespace std;

int main()
{
    double a, b, c;
    cin >> a >> b >> c;
    if (a+b>c&&a-b<c)
    {
        double C = a + b + c;
        cout << "三角形的周长是：" << C << endl;
        if (a == b||b==c||a==c)
        {
            cout << "该三角形是一个等腰三角形" << endl;
        }
        else
        {
            cout << "该三角形不是等腰三角形" << endl;
        }
    }
    else
    {
        cout << "无法构成三角形" << endl;
    }
  

}