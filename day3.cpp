#include<iostream>
using namespace std;

int main ()
{
int num,i,j;
int count=0;
cout<<"enter the no to calculate prime numbers in between that number";
cin>>num;
for(i=2;i<=num;i++)
//1st loop 
{
for( j=2;j<=i;j++)
//2nd loop in this is going to check if I/j gives remainder or not
{
if(i%j==0)
//if it gives remainder then loop will break and run again so due to this multiples of 2,3,4 are eliminated
{
break;
//break is going to break only this loop .
} 
/*even if we get remainder from some values like 3/2 or 5/3 the if below is only going to check equality
 it will not count any other values giving remainder*/
}
if(i==j)
// this if statement checks if iand j are equal then it will add 1 to count 
{
count=count+1;
cout<<"the prime no is "<<i<<endl;
}
}
cout<<"total number of prime numbers are:"<<count;
return 0;
}