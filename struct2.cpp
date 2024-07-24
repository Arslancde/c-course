#include <iostream>
using namespace std;

struct employee
{
    int eid;
    int favchar;
    float salary;
};
int main()
{
    struct employee Ali;
    Ali.eid=111;
    Ali.favchar='A';
    Ali.salary=22222;
    cout<<"employee eid is "<<Ali.eid<<endl;
    cout<<"employee favchar is "<<Ali.favchar<<endl;
    cout<<"employee salary is "<<Ali.salary<<endl;
    return 0;
}