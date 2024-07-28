#include <iostream>
using namespace std;
int sortthree(int &a, int &b, int &c)
{
    int temp;
    if (a > b)
    {
        temp = a;
        a = b;
        b = temp;
    }
    if (a > c)
    {
        temp = a;
        a = c;
        c = temp;
    }
    if (b > c)
    {
        temp = b;
        b = c;
        c = temp;
    }
}
int main()
{
    int num1, num2, num3;
    cout << "enter the value of num1" << endl;
    cin >> num1;
    cout << "enter the value of num2" << endl;
    cin >> num2;
    cout << "enter the value of num3" << endl;
    cin >> num3;
    cout<<"values before sorting are "<<num1<<" "<<num2<<" and "<<num3<<endl;
    sortthree(num1,num2,num3);
    cout<<"values after sorting are "<<num1<<" "<<num2<<" and "<<num3<<endl;
    return 0;
}