/*For example, given the array [1, 3, 1, 2, 0, 1], we can go from indices 0 -> 1 -> 3 -> 5, so return true.

Given the array [1, 2, 1, 0, 0], we can't reach the end, so return false.

lets take array {1,3,1,2,0,1}
we iniatialize reach=0 so when i=0 a[i]=1  so if statement will check which will result in false because 0<0 is not true

then reach will be updated with argumrnts reach =0 ,i+a[i] which is requal to (0.0+1) so reach will become 1 because of max function

next when index update to 1 reach=1 so if statement still false reach will update to (1,1+3) so reach will become 4
 
 when it reaches to index 2 reach is 4  if= false reach will update (4,2+1) so reach will still be 4

 next when index update to 3 reach is 4 if=false  reach will update (4,3+2) so reach will become 5 

next when index update to 4 reach 5 if=false  reach will be same beacuse a[4]=0

next when index is 5 reach 5 if =false   reach will update (5,5+1) so reach will become 6 

loop terminate i<size   size=5

the second if statement if we encounter our  jump limit is grater-than-equal-to the end of the array is possible return true early
*/
#include<iostream>
using namespace std;

template<class p>
p end(p a[], p n)
{
    int reach=0;
    for(int i=0;i<n;++i)
    {
        if(reach<i)
        return false;
        if(reach>=n)
        return true;
        reach=max(reach,i+a[i]);
    }
    return true;

}
int main(){
    cin.tie(0);
    int size;
    cout<<"enter the number of elements you want to enter\n";
    cin>>size;
    int a[size];
    cout<<"enter the elements\n";
    for(int p=0;p<size;++p)
    {
        cin>>a[p];
    }
    if(end(a,size)==true)
    {
        cout<<"true we can reach the end\n";

    }
    else
    {
        cout<<"we cannot reach end\n";

    }
    
system("pause");
}