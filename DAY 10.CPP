#include<iostream>
using namespace std;
int main()
{
    int number;
    cout<<"enter the amount of numbersyou want to enter";
    cin>>number;
    int arr[number];
    for(int i=0;i<number;i++)
   { cout<<"enter the number"<<i+1<<endl;
    cin>>arr[i];
   }
   int minimum=arr[0];
   for(int j=0;j<number;j++)
   {
       if(minimum>arr[j])
       minimum=arr[j];

   }
cout<<"minimum number in array is"<<minimum<<endl;
system("pause");
return 0;

}