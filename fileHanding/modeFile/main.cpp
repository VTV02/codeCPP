#include <iostream>
#include<fstream>
#include<string>
using namespace std;





int main()
{
    fstream fs;
    /*//chế độ này chỉ có thể đọc file thôi
    fs.open("Text.txt",ios::in);
    string str;
    //đọc file
    getline(fs,str);
    cout<<"Str : "<<str;
    //không thể ghi vào được
    //fs<<"Anh Ba";*/
    //mở file ở chế độ ghi đồng thời xóa hết dữ liệu cũ trong file
    //đồng thời nếu file ko tồn tại thì nó sẽ tự tạo file cho mình ghi
    fs.open("Text.txt",ios::out);
    fs<<"Vo Van Trung";


    return 0;
}
