#include <iostream>

using namespace std;
//nhap mang tu ban phim
// ra theo giam dan hoac tang gian
void enterArray(int &n,int Arr[])
{
    cout<<"Nhap so phan tu cua mang:   ";
    cin>>n;
    for(int i=0;i<(n);i++)
    {
        cout<<"Moi nhap phan tu Arr["<<i<<"]: ";
        cin>>Arr[i];
    }

}

/*void arrageArray_dec(int n,int Arr[])
{

  for(int i=(n-1);i>0;i--)
  {
      for(int j=0;j<i;j++)
      {
          if(Arr[j]>Arr[j+1])
          {
              int tmp=Arr[j];
              Arr[j]=Arr[j+1];
              Arr[j+1]=tmp;
          }
      }
  }
  for(int i=0;i<(n);i++)
  {
      cout<<Arr[i]<<" ";
  }

}*/
void arrageArray_inc(int n,int Arr[])
{

  for(int i=(n-1);i>0;i--)
  {
      for(int j=0;j<i;j++)
      {
          if(Arr[j]<Arr[j+1])
          {
              int tmp=Arr[j];
              Arr[j]=Arr[j+1];
              Arr[j+1]=tmp;
          }
      }
  }
  for(int i=0;i<(n);i++)
  {
      cout<<Arr[i]<<" ";
  }

}



int main()
{
    int n;
    int Arr[30];
    enterArray(n,Arr);
    arrageArray_inc(n,Arr);
    return 0;
}
