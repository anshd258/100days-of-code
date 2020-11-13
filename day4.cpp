#include<iostream>
using namespace std;

int swap(int arr[], int x)
{
int temp, count=0;
for(int i=0;i<x;i++)
//1st loop initialised
if(arr[i]!=i+1)
//taking index as an refference
{
for(int j=i+1;j<x;j++)
if(arr[j]==i+1)
// checking for the array refference to index
{
temp=arr[j];
arr[j]=arr[i];
arr[i]=arr[j];
}
//main swaping
count++;
}
cout<<"the minimum no of swaps required"<<count<<endl;
system("pause");
}
int main()
{
int myarr[20];
int size;
cout<<"enter the size of array in even no to make couples"<<endl;
cin>>size;// taking size
cout<<"enter the elements of array from 1 upto--"<<size<<"--without repetition"<<endl;
for(int i=0;i<size;i++)
{
cin>>myarr[i];
// taking elements of array 
if (size%2!=0)
break;
//break state ment if size is odd bcz in odd no we can't form couples
}
swap(myarr,size); 
//swap function is called
return 0;
}