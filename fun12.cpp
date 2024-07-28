#include <iostream>
using namespace std;
void swap(float &a, float &b)
{
    float temp = a;
    a = b;
    b = temp;
}
void swap(char &c, char &d)
{
    char e = c;
    c = d;
    d = e;
}
int main()
{
    float num1, num2;
    cout << "enter the value of num1 " << endl;
    cin >> num1;
    cout << "enter the value of num2 " << endl;
    cin >> num2; 
    cout << "values of num1 and num2 before swap are " << num1 << " and " << num2 << endl;
    swap(num1, num2);
    cout << "values of num1 and num2 after swap are " << num1 << " and " << num2 << endl;

    char ch1, ch2;
    cout << "enter the value of ch1 " << endl;
    cin >> ch1;
    cout << "enter the value of ch2 " << endl;
    cin >> ch2;
    cout<<"values of ch1 and ch2 before swap are as "<<ch1<<" and "<<ch2<<endl;
    swap(ch1,ch2);
    cout<<"values of ch1 and ch2 after swap are as "<<ch1<<" and "<<ch2<<endl;
    return 0;
}