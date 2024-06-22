#include <iostream>
using namespace std;

int main()
{
    //sẽ được tạo trên vùng nhớ Heap
    int *a= new int(5);//cấp phát cho con trỏ a vùng nhớ kiểu int với giá trị khởi tạo là 5
    cout<<*a;
    delete a;// giải phóng vùng nhớ cho con trỏ a trên heap, tránh rò rỉ bộ nhớ,
    //do biến được tạo trên vùng nhớ heap sẽ ko tự động được giải phóng khi sử dụng


    return 0;
}
