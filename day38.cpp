#include<bits/stdc++.h>
using namespace std;
typedef int i;
void print(i *p,i s)
{
    for(int j=0;j<s;++j)
    {
        cout<<p[j];
    }
}
void permu(i *a,i l, i r)
{
    if(l==r-1)
    {
        print(a,r);
        cout<<endl;

    }
    else
    {
        for(int j=l;j<r;j++)
        {
            swap(a[j],a[l]);
            permu(a,l+1,r);
            swap(a[j],a[l]);
        }
    }
    
}
int main()
{
    cin.tie(0);
    i size ,lval=0,m=0;
    cout<<"enter the siaze of array you want to enter\n";
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