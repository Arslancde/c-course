#include <iostream>
using namespace std;
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    // int ele = 4;
    int ele;
    cout<<"enter element to found "<<endl;
    cin>>ele;
    int loc = -1;
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] == ele)
        {
            loc = i;
            break;
        }
    }
            if (loc != -1)
            {
                cout << "element " << ele << "found at location " << loc << endl;
            }
            else
            {
                cout << "element not found " << endl;
            }
        return 0;
}