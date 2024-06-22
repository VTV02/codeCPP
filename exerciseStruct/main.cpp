#include <iostream>


using namespace std;
float const PI=3.14;
struct Circle
{
    float r;
    friend istream&operator>>(istream& nhapBK,Circle &circle)
    {
        cout<<"Nhap ban kinh: ";
        nhapBK>>circle.r;
        return nhapBK;
    }
    float cv()
    {
        return r*2*PI;
    }
    float dt()
    {
        return r*r*PI;
    }
};

int main()
{
   Circle circle;
   cin>>circle;
   cout<<"Chu vi hinh tron: "<<circle.cv()<<endl;
   cout<<"Dien tich hinh tron: "<<circle.dt();


   return 0;
}
