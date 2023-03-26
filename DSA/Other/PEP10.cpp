#include<iostream>
using namespace std;

class one
{
    public:
        int a=15, b=5;
        int shownumber()
        {
            cout<<"First number is "<<a<<endl;
            cout<<"First second is "<<b<<endl;
        }
};

class two:public one
{
    public:
        int addnumber()
        {
            cout<<"The sum of 1st and 2nd number is "<<a+b<<endl;
        }
};

int main()
{
    two obj;

    obj.shownumber();
    obj.addnumber();

    return 0;
}