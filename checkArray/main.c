#include <iostream>
//nhap vao mang n phan tu
//nhap vao so k, kiem tra xem co trong mang vua nhap khong
using namespace std;

void enterArray(int &n,int Arr[])
{
    cout<<"Nhap so phan tu cua mang: ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<"Nhap phan tu Arr["<<i<<"]: ";
        cin>>Arr[i];
    }
    for(int i=0;i<n;i++)
    {
        cout<<Arr[i]<<" ";
    }

}
void check_K(int n,int Arr[],int &k)
{
    cout<<"\nNhap so K ban muon Check: ";
    cin>>k;
    int tmp=0;
    for(int i=0;i<n;i++)
    {
        if(k==Arr[i])
        {
            tmp++;
        }
    }
    cout<<"So phan tu K co trong Arr :"<<tmp;
}

int main()
{
    int n,k;
    int Arr[30];
    enterArray(n,Arr);
    check_K(n,Arr,k);
    return 0;
}
