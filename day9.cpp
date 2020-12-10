#include<iostream>
using namespace std;
int main()
{
    int arr[10];
    int _max ;
    int p=sizeof(arr)/sizeof(arr[0]);

    cout<<"enter the number's(max 10)"<<endl;
    for(int i=0;i<p;i++)
    {
        cin>>arr[i];
//entering the elements


    }
    _max=arr[0];
    for(int j=0;j<p;j++)
    {
        if(arr[j]>_max)
        {
            _max=arr[j];
//calculating the max subarray

        }
    }
cout<<_max<<endl;
for (int n=0; n<p; n++)
    {
        int z;
        for (z=0; z<n; z++)
          {
              if (arr[n] == arr[z])
//checking if the number printed repeat's
               break;
          }


        // If not printed earlier, then print it
        if (n == z)
          cout << arr[n] << " ";
    }
    system("pause");

    return 0;
}