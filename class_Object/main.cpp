#include <iostream>
#include<string>

using namespace std;
//class va object
//1 con nguoi, Ten: Vo Van Trung, tuoi:21, dia chi: TayNinh
// class chinh la con nguoi
// Vo Van Trun  chinh la object hay chinh la person1
class Person
{
public://Cong khai, pham vi truy cap cua no la cong khai
    //Properties(thuoc tinh)
    string name;
    int age;
    //string address;
    //Methods(Cac ham)
    void work()
    {
        cout<<name<<"is working in "<<address<<endl;
    }
    //goi address trong pham vi class thi ok
private://Rieng tu,chi duoc su dung trong pham vi class thoi
    //thoat ra ngoai se ko dc
    string address="Tay Ninh";
};
//ngoai ra trong public cũng có khởi tạo sẵn Constructor
// Person(){} nó sẽ được chạy
int main()
{
    Person person1;
    person1.name="Vo Van Trung ";
    person1.age=21;
    //person1.address="Tay Ninh";
    //ko dc neu de address o private
    cout<<"Name: "<<person1.name<<endl;
    cout<<"Age: "<<person1.age<<endl;
    //cout<<"Address: "<<person1.address<<endl;
    person1.work();
    return 0;
}

