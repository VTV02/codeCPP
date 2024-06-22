#include <iostream>

using namespace std;

int main()
{

    /*for(int i=1;i<10;i++)
    {
        cout<<i<<endl;
        if(i==5)
        {
            break;
        }
    }*/
    /*for(int i=1;i<10;i++)
    {
        if(i==5)
        {
            continue;
        }
        cout<<i<<endl;
    }*/
    int n;
    try_again:
    cout<<"Nhap n= ";
    cin>>n;
    if(n<=0 || n%2==0)
    {
        goto try_again;
    }
    cout<<"Gia tri cua n la: "<<n;






    return 0;
}
