#include <iostream>
#include<fstream>
#include<string>
using namespace std;
struct Person
{
    string name;
    int age;
    Person(){}
    Person(string _name,int _age)
    {
        name=_name;
        age=_age;
    }
};


int main()
{
    Person* persons= new Person[20];
    /*persons[0]=Person("Vo Van Trung",21);
    persons[1]=Person("Tu hoc lap trinh",2024);*/

    fstream fs;
    fs.open("text.txt");
    if(!fs.is_open())
    {
        return 1;
    }
    /*for(int i=0;i<2;i++)
    {
        fs<<persons[i].name<<endl;
        fs<<persons[i].age<<endl;
    }*/
    for(int i=0;i<2;i++)
    {
        //đọc dữ liệu trong file cho đên khi gặp dấu xuống dòng
        //gán vào persons[i].name
        getline(fs,persons[i].name);
        //dữ liệu tiếp theo dạng số trong file
        //sẽ được gán vào persons[i].age
        fs>>persons[i].age;
        fs.ignore();
    }
    for(int i=0;i<2;i++)
    {
        cout<<"Name: "<<persons[i].name<<endl;
        cout<<"Age: "<<persons[i].age<<endl;
    }
    return 0;
}
