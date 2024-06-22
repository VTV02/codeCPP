#include <iostream>
#include<string>
//nhập chuỗi
//xuất ra in hoa chữ cái đầu của mỗi từ
//vo van trung -> Vo Van Trung

using namespace std;

int main()
{
    string str;
    cout<<"Nhap chuoi: ";
    getline(cin,str);
    //chuyển các ký tự thành chữ thường
    for(int i=0;i<str.length();i++)
    {
        if(str[i]>=65 && str[i]<=90)
        {
            str[i]+=32;

        }
    }
    //Chuyển ký tự đầu tiên mỗi từ thành chữ hoa
    if(str[0]!=' ')
    {
        str[0]-=32;
    }
    for(int i=0;i<str.length();i++)
    {
        if(str[i]==' ' && str[i+1]!=' ')
        {
            str[i+1]=str[i+1]-32;
        }

    }
    cout<<str;

    return 0;
}
