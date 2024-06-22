#include <iostream>
#include<fstream>
#include<string>
using namespace std;

int main()
{
    fstream fs;
    //truyền vào tên file nó ngang cấp với file main

    fs.open("text.txt");
    //fs.open("Desktop\\USB_course.txt");
    if(!fs.is_open())
    {
        return 1;
    }
    //fs<<"Vo Van Trung"<<endl;
    //fs<<1;
    string str;
    getline(fs,str);
    cout<<str;



    return 0;
}
