#include <iostream>

using namespace std;

struct point
{
    int x;
    int y;
    friend istream & operator>>(istream & trung,point &p)
    {
        cout<<"Nhap x: ";
        trung>>p.x;
        cout<<"Nhap y: ";
        trung>>p.y;
        return trung;
    }

    friend ostream & operator<<(ostream &trung, point p)
    {
        trung<<p.x<<" "<<p.y;
    }

    friend point operator+(point p1,point p2)
    {
        point p3;
        p3.x= p1.x+p2.x;
        p3.y= p1.y+p2.y;
        return p3;
    }
};


int main()
{
    point p1,p2;
    cout<<"Nhap p1"<<endl;
    cin>>p1;
    cout<<"Nhap p2"<<endl;
    cin>>p2;
    point p3=p1+p2;//toán tử cộng nó chưa được nạp chồng
    cout<<"p1+p2= "<<p3;

    return 0;
}
