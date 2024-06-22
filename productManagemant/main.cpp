#include <iostream>
#include<string>
using namespace std;

//Quản lý sản phầm gồm (tên, đơn giá ,số lượng)
//Có các chứ năng sau:
/*
   +Xem danh sách các sản phẩm
   +Thêm sản phẩm mới
   +Xóa sản phẩm
*/
struct Product
{
    string name;
    float price;
    int quatity;

    friend istream&operator>>(istream& input,Product &P)
    {
        cout<<"Nhap ten san pham: ";
        input.ignore();
        getline(input,P.name);
        cout<<"Nhap gia san pham: ";
        input>>P.price;
        cout<<"Nhap so luong san pham: ";
        input>>P.quatity;
        return input;
    }
    friend ostream&operator<<(ostream&output,Product P)
    {
        output<<"Name: "<<P.name<<" ,"<<"Price: "<<P.price<<" ,"<<"Quatity: "<<P.quatity<<endl;
        return output;
    }
};

int show_menu();
void list_view(Product *P,int size);
void add_product(Product* &P,int &size);
void remove_product(Product* &P,int &size);

int main()
{
    int size=0;
    Product *P=new Product[size];
    while(true)
    {
       int choose =show_menu();//lựa chọn
       system("cls");
       switch(choose)
       {
           //xem danh sach sp
           case 1:list_view(P,size);
               break;
           //them sp
           case 2: add_product(P,size);
               break;
           //xoa sp
           case 3: remove_product(P,size);
               break;
           //thoat
           case 0:cout<<"Bye Bye!";
              return 0;
              break;
           default: cout<<"Your choose wrong."<<endl;

       }
       cout<<"Are you continue ?(1/0)";
       bool is_continue;
       cin>>is_continue;

       if(!is_continue)
       {
           cout<<"See you again ^-^";
           break;
       }
    }

    return 0;
}
int show_menu()
{
    system("cls");
    int choose;
    cout<<"==========MENU=========="<<endl;
    cout<<"1.List view"<<endl;
    cout<<"2.Add new product"<<endl;
    cout<<"3.Remove product"<<endl;
    cout<<"0.Exit"<<endl;
    cout<<"Your choose: ";
    cin>>choose;
    return choose;
}
void list_view(Product *P, int size)
{

    if(!size)
    {
        cout<<"Unavailable"<<endl;
    }
    else
    {
        cout<<"==========List View========== "<<endl;
        for(int i=0;i<size;i++)
        {
            cout<<P[i]<<endl;
        }
    }
}

void add_product(Product* &P,int &size)
{
    Product new_product;
    cout<<"==========Add Product=========="<<endl;
    cout<<"Enter new product information: "<<endl;
    cin>>new_product;
    int new_size= size+1;
    Product *tmp_products = new Product[new_size];
    for(int i=0;i<size;i++)
    {
        tmp_products[i]=P[i];
    }
    tmp_products[new_size-1]= new_product;
    delete[] P;
    P=tmp_products;
    size=new_size;
    cout<<"Add success new product!"<<endl;
}
void remove_product(Product* &P,int &size)
{
    cout<<"==========Remove Product=========="<<endl;
    string remove_name;
    cout<<"Name product you want to remove: ";
    cin.ignore();
    getline(cin,remove_name);
    int remove_index=-1;
    for(int i=0;i<size;i++)
    {
        if(!remove_name.compare(P[i].name))
        {
            remove_index=i;
            break;
        }
    }
    if(remove_index==-1)
    {
        cout<<"Not found product!"<<endl;
        return;
    }
    for(int i=remove_index;i<size-1;i++)
    {
        P[i]=P[i+1];
    }
    size--;
    Product *tmp_product=new Product[size];
    for(int i=0;i<size;i++)
    {
        tmp_product[i]=P[i];
    }
    delete[]P;
    P=tmp_product;
    cout<<"Remove success!"<<endl;

}
