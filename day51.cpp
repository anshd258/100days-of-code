#include<iostream>
#include<math.h>
#include<thread>
using namespace std;
void init(int *s, int j)
{
    for (int i = 0; i < j; ++i)
    {
        cin >> s[i];
    }
}
void fun(int a[],int b[],int s ,int c )
{
    cout<<"checking if the function is one-to-one\n";
    this_thread::sleep_for(chrono::milliseconds(50000) );
    if(s==c)
    { 
        cout<<"function is one to one \n";
     cout<<"finding the inverse of function f\n";
     this_thread::sleep_for(chrono::milliseconds(30000) );
      for(int i=0;i<s;++i)
      {
        this_thread::sleep_for(chrono::milliseconds(10000) );
        cout<<b[i]<<"=>"<<a[i]<<"\n"; 
      }
    }
    else
    {
        cout << "the function dosent have an inverse\n";
    }
}
int main()
{
    cin.tie(0);
    int size,size2;
    cout<<"enter the size of domain array\n";
    cin>>size;
    cout<<"is the size of range array same  (y/n)\n";
    char g;
    cin>>g;
    if(g=='n')
    {cout<<" enter the size of range array\n";
    cin>>size2;
    }
    else
    {
        size2=size;
    }

   
    int* arr = new int[size];
    int* arr2 = new int[size2];
    cout << "enter the domain array\n";
    init(arr, size);
    cout << "enter the range array\n";
    init(arr2, size2);
    fun(arr, arr2, size, size2);
    
}


