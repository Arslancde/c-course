#include <iostream>
using namespace std;
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << endl;
    }
    int max = arr[0];
    cout << "displaying max element " << endl;
    for (int i = 1; i < 5; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    cout << max << endl;

    cout << "displaying min element " << endl;
    int min = arr[0];
    for (int i = 1; i < 5; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    cout << min << endl;

    // sum of all numbers
    int sum = 0;
    for (int i = 1; i < 5; i++)
    {
        sum = sum + i;
    }
    cout << sum;
    return 0;
}