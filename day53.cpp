/*the method prints spiral of an 2d matrix with 4 loops 
we use the  last row adn last colum ad the key to print the opposit sides of the matrix
*/
#include<iostream>
using namespace std;
int main()
{
    cin.tie(0);
    int size_r,size_c;
    cout<<"enter the length of the matrix\n enter the row"<<endl;
    cin>>size_r;
    cout<<"enter the column\n";
    cin>>size_c;
    int arr[size_r][size_c]={0};
    cout<<"enter the data\n row wise"<<endl;
    for (int i = 0; i < size_r; ++i)
    { for (int j = 0; j < size_c; ++j)
    {cin >> arr[i][j];}}
    cout<<"your array\n";
    for (int i = 0; i < size_r; i++) 
{ 
   for (int j = 0; j < size_c; j++) 
   { 
      cout << arr[i][j] << " "; 
   } 
    
   cout << endl; 
}
   int i, row=0 ,col=0;
      while(row<size_r&&col<size_c)
   {
       for(i=col;i<size_c;++i)
       {
           cout<<arr[row][i]<<" ";
       }
       row++;
       cout<<endl;
       for(i=row;i<size_r;++i)
       {
           cout<<arr[i][size_c-1]<<" ";
       }
       size_c--;
        cout<<endl;
       if(row<size_r)
       {
           for(i=size_c-1;i>=col;--i)
           {
               cout<<arr[size_r-1][i]<<" ";
           }
           size_r--;
            cout<<endl;
       }
       if(col<size_c)
       {
           for(i=size_r-1;i>=row;--i)
           {
               cout<<arr[i][col]<<" ";
           }
           col++;
            cout<<endl;
       }
   }
}