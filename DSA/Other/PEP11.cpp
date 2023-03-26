#include<iostream>
using namespace std;

class one
{
    public:
        int a=15;
        int shownumber1()
        {
            cout<<"First number is "<<a<<endl;
        }
};

class two
{
    public:
        int b=5;
        int shownumber2()
        {
            cout<<"Second number is "<<b<<endl;
        }
        
};

class three:public one,public two
{
    public:
        int addnumber()
        {
            cout<<"The sum of 1st and 2nd number is "<<a+b<<endl;
        }
};

int main()
{
    three obj;

    obj.shownumber1();
    obj.shownumber2();
    obj.addnumber();

    return 0;
}