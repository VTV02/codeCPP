#include <iostream>
#include<string>
using namespace std;
int main()
{
    string str;
    cout<<"Nhap chuoi: ";
    getline(cin,str);
    //xoa khoang trang o dau chuoi
    while(str[0]==' ')
    {
        str.erase(0,1);
    }
    //xoa khoang trang cuoi chuoi
    while(str[str.length()-1]==' ')
    {
        str.erase(str.length()-1,1);
    }
    cout<<"Chuoi vua nhap:"<<str;
    return 0;
}
