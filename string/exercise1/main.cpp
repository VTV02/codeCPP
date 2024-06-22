#include <iostream>
#include<string>
using namespace std;
// chuỗi được nhập vào
//xuất ra chỉ có 1 khoảng cách giữa 2 ký tự
//a   b ->a b
int main()
{
    string str;
    cout<<"Nhap chuoi: ";
    getline(cin,str);
    int i=0;
    while(i<str.length())
    {
        if(str[i]==' ' && str[i+1]==' ')
        {
            str.erase(i,1);
        }
        else
        {
            i++;
        }
    }
    cout<<str;
    return 0;
}
