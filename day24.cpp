#include<bits/stdc++.h>
using namespace std;
int main()
{
    int size;
    cout<<"enter the size of array \n";
    cin>>size;
    int mid=size/2;
    int arr[size];
    for(int i=0;i<size;i+=2)
    {
        if(i>size)
        break;
        cout<<"enter the 1st element of  "<<i+1<<"pair\n";
         cin>>arr[i];
         cout<<"enter the 2nd element of "<<i+1<<"pair\n";
         cin>>arr[i+1];  
    }
    int _max=arr[size-1];
    int _min=arr[0];
    for(int j=0;j<mid;j++)
    _min=max(arr[0],arr[j]);

     for(int j=size-1;j>=mid;--j)
     _max=min(arr[size-1],arr[j]);
     cout<<_max<<_min;
    system("pause");
    return 0;
}