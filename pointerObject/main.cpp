#include <iostream>
#include<string>

using namespace std;

class Cat
{
private:
    string name;
    int age;
public:
    Cat(){}
    Cat(string name,int age)
    {
        this->name=name;
        this->age=age;
    }
    string get_name()
    {
        return name;

    }
    int get_age()
    {
        return age;
    }

};


int main()
{
    Cat *cat=new Cat("Tom",2);
    cout<<"Name: "<<cat->get_name()<<endl;
    cout<<"Age: "<<cat->get_age();

    return 0;
}
