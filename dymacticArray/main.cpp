#include <iostream>

using namespace std;



int main()
{
    int *Arr= new int[3];
    for(int i=0;i<3;i++)
    {
        Arr[i]=1;

    }
    cout<<"Cac phan tu truoc khi them: "<<endl;
    for(int i=0;i<3;i++)
    {
        cout<<Arr[i]<<"  ";
    }
    //tao mang dong moi co 4 phan tu
    int *new_arr = new int[4];
    //sao chep toan bo gia tri cu sang mang moi
    for(int i=0;i<3;i++)
    {
        new_arr[i]=Arr[i];
    }
    new_arr[3]=2;
    cout<<"\nCac phan tu sao khi them: ";
    for(int i=0;i<4;i++)
    {
        cout<<new_arr[i]<<" ";
    }
    delete[] Arr;//vì xóa cả mảng nhiều phần tử
    //gán vùng nhớ mới cho Arr
    Arr=new_arr;
    cout<<"\nIn trong vung nho moi cua Arr: ";
    for(int i=0;i<4;i++)
    {
        cout<<Arr[i]<<" ";
    }


    return 0;
}
