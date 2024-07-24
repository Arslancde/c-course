#include <iostream>
using namespace std;
int main()
{
    int age;
    int currentyear;
    int birthyear;
    int currmonth;
    int birthmonth;
    int currday;
    int birthday;
    int year;
    int month;
    int day;
    cout << "enter your cuurent year " << endl;
    cin >> currentyear;
    cout << "enter your birth year " << endl;
    cin >> birthyear;
    year = currentyear - birthyear;
    cout << " your age in year is " << year << endl;
    cout << "enter your month of birth " << endl;
    cin >> birthmonth;
    cout << "enter your current month " << endl;
    cin >> currmonth;
    month = currmonth - birthmonth;
    cout << "your age in month is " << month << endl;
    cout << "enter your day of birth " << endl;
    cin >> birthday;
    cout << "enter your current day " << endl;
    cin >> currday;
    day = currday - birthday;
    cout << "your birth in days is as " << day << endl;
    cout << "your total age is " << year << " year " << month << " month and " << day << " days " << endl;
    
    if(year>=18)
    {
        cout<<"you are eliible for vote "<<endl
        <<"you are also eligible for license "<<endl;
    }
    if(year<18)
    {
        cout<<" sorry! you are not eligible for vote "<<endl;
    }
    return 0;
}