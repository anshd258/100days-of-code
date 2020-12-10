#include<bits/stdc++.h>
using namespace std;
int main()
{
    unsigned int _int;
    int arr[32]={0};
    cout<<"enter the number\n";
    cin>>_int;
    int i=0;
    while(_int>0)
    {arr[i]=_int%2;_int=_int/2;std::cout<<arr[i]<<endl;i++;}
    int j=0;
while(j<i)
  {swap(arr[j],arr[j+1]);j+=2;}
  for(int m=0;m<i;m++)
  {cout<<arr[m];}
system("pause");
    return 0;

}
