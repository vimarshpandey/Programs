#include<iostream>
using namespace std;

class Animal
{
    public:
        void fun1()
        {
            cout<<"Janwar"<<endl;
        }
};
class Dog:public Animal
{
    public:
        void fun2()
        {
            cout<<"Kutta"<<endl;
        }
};

int main()
{
    Dog obj;
    obj.fun1();
    obj.fun2();
    return 0;
}