#include <iostream>
#include<math.h>
using namespace std;
//nhap so nguyen duong
//kiem tra so do co phai la so nguyen to hay ko
void enter(int &n)
{
    try_again:
    cout<<"Nhap so: ";
    cin>>n;
    while(n<0)
    {
        goto try_again;
    }

}
int check_prime(int n)
{
    for(int i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            return 0;
        }

    }
    return 1;
}
int main()
{
    int n;
    enter(n);
    if(check_prime(n))
    {
        cout<<n<<" La so nguyen to";
    }
    else cout<<n<<" Khong phai so nguyen to";
    return 0;
}
