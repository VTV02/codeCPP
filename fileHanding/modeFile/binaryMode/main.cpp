#include <iostream>
#include<fstream>
#include<string>
using namespace std;

int main()
{
    //ostream giúp mở file và ghi file
    //nếu file này không tồn tại nó sẽ tự tạo file đó luôn
    //có đuôi .bin hoặc .dat
    ofstream ofs;
    ofs.open("text.bin",ios::binary);
    if(!ofs.is_open())
    {
        cout<<"Open fall";
        return 1;
    }
    int n=6;
    //truyền vào biến n và dung lượng của nó
    ofs.write((char*)&n,sizeof(int));
    ofs.close();
    ifstream ifs;
    ifs.open("text.bin",ios::binary);
    int read_n;
    ifs.read((char*)&read_n,sizeof(int));
    cout<<read_n;

    return 0;
}
