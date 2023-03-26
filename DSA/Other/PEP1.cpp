#include<iostream>
using namespace std;

class A
{
    protected:
        int a;
        public:
            void seta(int x)
                {
                    a=x;
                }
};

class B
{
    protected:
        int b;
        public:
            void sett(int y)
            {
                b=y;
            }
};

class C : public A,public B
{
    public:
};