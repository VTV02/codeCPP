#include <iostream>

using namespace std;
class B;
class A
{
private:
    int x=9;
    friend B;
};
class B
{
public:
    void print_x(A a)
    {
        cout<<a.x;// sai
        //muốn chay phải khai báo lớp B là bạn lớp A
    }

};
int main()
{
    B b;
    b.print_x(A());

    return 0;
}
