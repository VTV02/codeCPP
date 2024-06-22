#include <iostream>
#include<vector>
using namespace std;
/*vector xem như mảng động được tạo ra để chúng
ta có thể dễ dàng tương tác với một mảng động
ví dụ như thêm phần tử, xóa phần tử ,...
*/
int main()
{
    //tạo mảng động kiểu int tên number
    vector<int> numbers;
    numbers.push_back(1);
    numbers.push_back(2);
    numbers.push_back(3);
    //hàm size trả về số lượng phần tử trong mảng
    for(int i=0;i<numbers.size();i++)
    {
        cout<<numbers[i]<<" ";

    }
    cout<<endl;
    //xoa phan tu thứ 2 trong mảng
    //ta phải truyền vào điai chỉ của phần tử đó trong mảng
    //hàm numbers.egin() sẽ trả về địa chỉ của phần tử đầu tiên trong mảng
    numbers.erase(numbers.begin()+1);
    for(int i=0;i<numbers.size();i++)
    {
        cout<<numbers[i]<<" ";

    }


    return 0;
}
