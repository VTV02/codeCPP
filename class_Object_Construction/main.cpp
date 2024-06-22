#include <iostream>
#include<string>
using namespace std;






class Person
{
public:
    string name;
    int age;
    string address;
    Person(string _name,int _age,string _address)
    {
        name=_name;
        age=_age;
        address=_address;
    }


private:

};

int main()
{

    Person person1("Vo Van Trung",21,"Tay Ninh");
    cout<<person1.name<<" "<<person1.age<<" "<<person1.address;
    return 0;
}
