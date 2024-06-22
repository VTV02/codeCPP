#include <iostream>
#include<string>
using namespace std;

class   Animal
{
public:
    virtual void move()
    {
        cout<<"Animal move";
    }
};
class Dog: public Animal
{
public:
    void move()
    {
        cout<<"Dog move";
    }
};

int main()
{
    Animal* animal=new Dog;
    animal->move();
    /*Dog dog;
    dog.move();*/

    return 0;
}
