#include<iostream>
using namespace std;
class node
{
    public:

    int data;
    node *next;
};
void print_data( node*first)
{
    while(first)
    {
        cout<<first->data<<" ";
        first=first->next;
    }

}
int partition(node* phead,node* dhead)
{
    node* p1=phead;
    node* p2 =dhead;
    int count1=0,count2=0,dill;
    while(p1!=NULL)
    {
        count1++;
        p1=p1->next;
    }
    while(p2!=NULL)
    {
        count2++;
        p2=p2->next;
    }
    p1=phead;
    p2=dhead;
    if(count1>count2)
    {
        dill=count1-count2;
        int i=0;
        while(i<dill)
        {
            p1=p1->next;
        }

    }
    else if(count2>count1)
    {
        dill=count2-count1;
        int i=0;
        while(i<dill)
        {
            p2=p2->next;
        }
    }
    int check=0;
    while(p1!=NULL&&p2!=NULL)
    {
        if(p1->data==p2->data)
        { check++;
        return p1->data;
        }
        p1=p1->next;
        p2=p2->next;
    }
 
return 0;
}
int main()
{
    char choice;
    node *arr[2];
    node *head=0,*_new,*temp;
    int i,j;
   for(i=0;i<2;++i)
   {
       arr[i]=new node();
       cout<<"enter head array data\n";
       cin>>arr[i]->data;
       temp=arr[i];
       while(j)
       {
           _new=new node();
           cout<<"enter the list"<<i+1<<"data\n";
           cin>>_new->data;
           temp->next=_new;
           temp=_new;
           cout<<"want to enter more data\n";
           cin>>choice;
           if(choice=='n')
           break;
       }
   }
   if(partition(arr[0],arr[1])!=0)
   cout<<"intersecting at :- "<<partition(arr[0],arr[1])<<endl;
else
{
    cout<<"no intersection found\n";
}

    cout<<"lists entred\n";
    print_data(arr[0]);
    cout<<endl;
    print_data(arr[1]);
    return 0;
}