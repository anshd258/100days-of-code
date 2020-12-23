#include<iostream>
using namespace std;
void lis(int *brr,int x)
{
    int krr[x]={1},i=1;
    while(i<x)
    {
      for(int j=0;j<i;++j)
        {
            if(brr[j]<=brr[i]&&krr[i]<=krr[j])
            {
                krr[i]=krr[j]+1;
            }
        }
     ++i;
    }
    cout<<"the karr pattern to find lis\n";
    for(int k=0;k<x;++k)
    cout<<krr[k];
    int max=krr[0];
    for(int p=0;p<x;++p)
    {
        if(krr[p]>max)
        max=krr[p];
    }
    cout<<"the length of longest increasing subsequence is \n"<<max;
}

int main()
{
    cin.tie(0);
    int size;
    cout<<"enter the size of array\n";
    cin>>size;
    int *arr=new int[size];
    cout<<"enter the elements of array\n";
    for(int i=0;i<size;++i)
    {
      cin>>arr[i];
    }
    lis(arr,size);
}