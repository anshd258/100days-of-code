#include<iostream>
using namespace std;
int64_t find(int64_t n)
{
    int count=0;
 int_fast64_t r =19;
    for ( ;; r += 9)
    {
  
       int_fast64_t sum = 0;
       
        for (int_fast64_t x = r; x > 0; x = x / 10)
            {sum = sum + x % 10;}

           if (sum == 10)
           count++;
           if (count==n)
           return r;
    }
}
int main()
{
    cin.tie(0);
 
    cout<<"enter the number\n";
    int num;
    cin>>num;

         cout<<find(num);

     return 0;
}