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
void partition(node* phead,int p)
{
    node *smallh=0,*smalle=0,*highh=0,*highe=0;
    while(phead!=NULL)
    {
        if(phead->data<p)
        {
        if(smallh==0)
        {
            smallh=smalle=phead;
        }
        else
        {
            smalle->next=phead;
            smalle=phead;
        }
        }
        else if (phead->data>=p)
        {
        if (highh==0)
        {
            highh=highe=phead;
        }
        else
        {
            highe->next=phead;
            highe=phead;
        }
        }
        phead=phead->next;
    }
    if(highe!=NULL)
    highe->next=NULL;
    if(smallh==0)
   { print_data(highh);
   
   }
    else
    {
        smalle->next=highh;
        print_data(smallh);
   
    }
    system("pause");
}
int main()
{
    char choice;
    node *head=0,*_new,*temp;
    int i=1;
    while(i)
    {
    _new=new node();
    cout<<"enter data\n";
    cin>>_new->data;
    _new->next=0;
    if(head==0)
    {
        head=temp=_new;
    }
    else
    {
        temp->next=_new;
        temp=_new;
    }
    cout<<"want to enter more data in list(y/n)\n";
    cin>>choice;
    if(choice=='n')
    break;
    }
    cout<<"your list \n";
    print_data(head);
    int x;
    cout<<"enter the element from which partition will be constructed\n";
    cin>>x;
    cout<<"partition is\n";
    partition(head,x);
    return 0;
}