#include<iostream>
using namespace std;

int swap(int *brr,int x)
{

    int temp;
    //temp for swaping
    for(int i=0;i<x;i+=2)
    {
        temp=brr[i+1];
        brr[i+1]=brr[i];
        brr[i]=temp;
        cout<<"new head is"<<brr[i]<<endl;
        cout<<"new linked is"<<brr[i+1]<<endl;
        
    }
    cout<<"new list is"<<endl;
    //swaping head with linked element
    for(int i=0;i<x;i++)
    cout<<brr[i];
    //printing the new list
    cout<<endl;
    return 0;
      
}
int main()
{
    int size;
    cout<<"enter the number of elements you want to enter"<<endl;
    cin>>size;
    //taking size
    int arr[size];
    cout<<"enter the elements enter the 1 st elementas head and 2 nd element as linked element"<<endl;
    for(int i=0;i<size;i+=2)
    {
        cout<<"enter the head";
        cin>>arr[i];
        cout<<"enter the linked element";
        cin>>arr[i+1];
    }
    //1st loop to enter elements
cout<<"main swap"<<swap(arr,size)<<endl;
//swap function called
system("pause");
return 0;

}