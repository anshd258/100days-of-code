#include<iostream>
using namespace std;
int find(int n)
{
    int count=0;
 
    for (int r = 19;; r += 9){
        int sum = 0;
    
        for (int x = r; x > 0; x = x / 10)
            {sum = sum + x % 10;}
        if (sum == 10)
            count++;
        if (count == n)
            return r;
    }
}
int main()
{
    cin.tie(0);
    cout<<"enter the number\n";
    unsigned int num,res;
    cin>>num;
     cout<<find(num);
     return 0;
}