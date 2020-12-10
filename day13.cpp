#include<iostream>
using namespace std;
int main()
{
    int size,max,sum=0;
    cout<<"enter the no of elements you want to input\n";
    cin>>size;
    //taking the array size
    int *arr=new int[size];
    //i used dynamic memory allocation bcz to make the program o=more realestic and usr friendly so user can input no of elements
    if (!arr)
    {
        cout << "Memory allocation failed\n";
        system("pause");
        exit(1);
    }
    //checking if the memory allocated in heap or not
    else
    //if memory allocated program main logic will run
    {
        for(int j=0;j<size;j++)
        {
            cout<<"enter the elements:   "<<j+1<<endl;
            cin>>arr[j];
        }
        //taking the elements form user

        max=arr[0];
        for(int i=0;i<size;i++)
        {
            if(arr[i]>max)
            max=arr[i];
            //calculating the max element so if all elements are -ve we can output the max -ve number
            if(arr[i]<0)
            {
                sum=0;
            }
            //if we encounter the -ve no sum will return to 0 so we can count the max subarray
            else
            {
                sum+=arr[i];
            }
            //if we ain't encounter any -ve num element will be added to sum

        }

    }
    if(sum==0)
    {
        cout<<"the max sum of subarray is"<<max<<endl;
        
    }
    //checking if sum is 0 we will output the max -ve number
    else
    {
        cout<<"the max sum of subarray is = "<<sum<<endl;
    }
    //otherwise we will out put the sum of max sub array
    system("pause");
    return 0;

}