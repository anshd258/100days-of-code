/* th program to calculate  the number of rounds you'd expect to play until one coin remains.

So there are n coins Probability suggests that when you flip all of them, half of them will 
show tails and the rest heads. So we set n/2 coins aside and are left with n/2 coins
 This time n/2/2 coins will show tails, so we set them aside and this pattern continues.
The sum of this GP must be equal to n-1 as we have 1 coin left in the end.

n/2 + n/4 + n/8 …… x terms = n-1

(n/2((1/2)^x-1))/((1/2)-1) = n-1 (sum of x terms of GP).
Solve it to get 2^x = n.
So x is log2 n.
x is number of rounds.
*/
#include <iostream>
#include<math.h>
using namespace std;
int main()
{
    cin.tie(0);
    cout<<"enter the number of coins to calculate the number of rounds\n";
    int number;
    cin>>number;
    double result=log2(number);
    cout<<"result"<<round(result);

}