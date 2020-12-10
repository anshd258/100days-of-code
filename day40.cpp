#include<bits/stdc++.h>
using namespace std;
typedef int i;
void print(i *p,i s)
{
    cout<<"the array\n";
    for(int j=0;j<s;++j)
    {
        
        cout<<p[j];
    }
    cout<<endl;
    system("pause");
}
void permu(i *a,i l, i r)
{
    if(l==r)
    {
        print(a,r);
        cout<<endl;

    }
    else
    {
        i count=0;
        for(int j=0;j<r;j++)
        { if(l==j)
           continue;
           else
           {
               if(a[l]==a[j])
               count++;
           }
        }
        if(count==0)
        cout<<"no dublicate found of :"<<a[l]<<endl;

        permu(a,l+1,r);
    }
    
}
int main()
{
    cin.tie(0);
    i size ,lval=0,m=0;
    cout<<"enter the size of array you want to enter\n";
    cin>>size;
    i arr[size];
    cout<<"enter the elements\n";
    while(m<size)
    {
        cin>>arr[m];
        cout<<"enter the next element\n";
        m++;
    }
    permu(arr,lval,size);
}