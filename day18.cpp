#include<iostream>
using namespace std;

int counter(int Arr[],int Size,int Len)  
//function declared counter
{
    int result=0,count=0;
    for(int i=0;i<Size;i++)
    {
        for(int j=0;j<Size;j++)
        {
            if(i==j)
            break;
//same index dosent repeat
            if(Arr[i]==Arr[j])
            count++;
//if elements repeat count will increase
        }
        
        if(count>=Len)
        {
            result=Arr[i];
            break;
            
//if count is grater than or equal to len (which is half the length of array)result will be calculated

        }
        
    

    }
    return result;
//returning result

}
int main()
{
    int size;
    cout<<"enter the number of elements you want to enter\n";
    cin>>size;
//taking the size of array
    int len=size/2;
//calculating the half length of array
    int arr[size];
    cout<<"enter the elements\n";
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];

    }
//inouting the array
   if(counter(arr,size,len)!=0)
//calling function counter
   {
       cout<<"majority element found\n"<<counter(arr,size,len)<<endl;

   }
//if result is not 0 then ouptput the result
   else
   cout<<"no mjority element found\n";
//else no majority found
    system("pause");
    return 0;
}