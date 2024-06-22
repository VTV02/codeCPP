#include <iostream>
#include<string>
using namespace std;
/*
  Nhập chuỗi và chuẩn hóa nó:
    +Loại bỏ khoảng trắng đầu và cuối chuỗi
    +Loại bỏ nhiều hơn 1 dấu cách giữa các từ
    +In hoa chữ cái đầu mỗi từ
*/

int main()
{
    string str;
    cout<<"Nhap chuoi can check: ";
    getline(cin,str);
    //xoa khoang tran dau chuoi
    while(str[0]==' ')
    {
        str.erase(0,1);
    }
    //xoa khoang trang cuoi chuoi
    while(str[str.length()-1]==' ')
    {
        str.erase(0,1);
    }
    //xoa nhieu hon 1 khoang trang giua cac tu
    int i=0;
    while(i<str.length())
    {
        if(str[i]==' '&& str[i+1]==' ')
        {
            str.erase(i,1);
        }
        else
        {
            i++;
        }
    }
    //viet hoa chu cai dau
    //chuyen tat ca sang chu thuong
    for(int i=0;i<str.length();i++)
    {
        if(str[i]>=65 && str[i]<=90)
        {
            str[i]+=32;
        }
    }
    //chuyen chu cai tai vi tri dau tien
    if(str[0]!=' ')
    {
        str[0]-=32;
    }
    //chuyen chu cai dau in hoa
    for(int i=0;i<str.length();i++)
    {
        if(str[i]==' '&& str[i+1]!=' ')
        {
            str[i+1]-=32;
        }
    }
    cout<<"Chuoi sau khi check: "<<str;
    return 0;
}
