// day 16 solution of 100 -days - of -codding cpp
//jamal erabaki
//control git end

#include <iostream>
using namespace std; 


int ap(int a,int b)
{
          if(a==0)       
//main recrussion function                       
          return b;         
          
          return ap(b%a,a);    
          
}                              
/*here it takes for ex 42%56,56 which will result in 42,56
then agin function is called this time a is 42 and b is56 which ressult in 0,42 so 42 will be returned*/


int main() 
{ 
    int result,n;
    int *arr = new(nothrow) int[n]; 
//allocated array in heap
    if(!arr)
    {
        cout<<"memory allocation failed"<<endl;
        system("pause");
        exit(0);
    }
//exit the program if program is unable to allocate memory
    else
    {
        cout<<"enter the nof of elements you want to enter \n";
        cin>>n;
        cout<<"enter the elements\n";

    for(int j=0;j<n;j++)
    {
        cin>>arr[j];
    }

//takin array elements
    result=arr[0];
    for (int i = 1; i < n; i++) 
       {
           
           
        result=ap(arr[i],result);
      
//result called our recrussion function
      }     

      
}
    cout <<"result is" <<result<< endl; 
//result output
    delete[] arr;
    system("pause");
//deleting allocated memory
    return 0; 
} 