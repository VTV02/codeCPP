#include <iostream>
#include<string>
using namespace std;
//tạo mảng có n phần tử nguyên(tối đa 10 phần tử nguyên ).
//Nhập vòa số nguyên x và thêm nó vào cuối mảng vừa tạo.
void enter_N(int &n)
{
    try_again:
    cout<<"Moi Anh Ba nhap N: ";
    cin>>n;
    while(n<0)
    {
        goto try_again;
    }
}
void input_array(int *arr,int n)
{
    for(int i=0;i<10;i++)
    {
        cout<<"Moi Anh Ba nhap arr["<<i<<"]: ";
        cin>>arr[i];
    }
    cout<<"\nTruoc khi them phan tu: "<<endl;
    for(int i=0;i<10;i++)
    {
        cout<<"Arr["<<i<<"]: "<<arr[i]<<endl;
    }
    int *new_arr= new int(11);
    for(int i=0;i<10;i++)
    {
        new_arr[i]=arr[i];
    }
    new_arr[10]=n;
    arr=new_arr;
    cout<<"\nSau khi them phan tu: "<<endl;
    for(int i=0;i<11;i++)
    {
        cout<<"Arr["<<i<<"]: "<<arr[i]<<endl;
    }


}
int main()
{
    int *arr= new int(10);
    int x;
    enter_N(x);
    input_array(arr,x);
    return 0;
}
