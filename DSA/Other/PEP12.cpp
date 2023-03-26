#include<iostream>
using namespace std;

class area
{
    public:
        int len=10, wdh=5, a=0;
        int areaofrect()
        {
            a=len*wdh;
        }
};

class vol
{
    public:
        int len=10, wdh=5, hei=50, volume=0;
        int areaofcuboid()
        {
            volume=len*wdh*hei;
        }
};

class show:public area,public vol
{
    public:
        int showing()
        {
            cout<<"The area and volume is "<<a<<" and "<<volume<<endl;
        }
};

int main()
{
    show obj;
    
    obj.areaofrect();
    obj.areaofcuboid();
    obj.showing();

    return 0;
}