#include <iostream>
using namespace std;
int table(int num)
{
    int table;
    for (int i = 1; i <=10; i++)
    {
        table = num * i;
        cout << num << " x " << i << " = " << table << endl;
    }
}
int main()
{
    int num;
    cout << "enter number for table " << endl;
    cin >> num;
    table(num); 
    return 0;
}