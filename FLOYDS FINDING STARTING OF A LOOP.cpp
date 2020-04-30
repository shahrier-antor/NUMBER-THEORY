#include<bits/stdc++.h>
using namespace std;
struct node

{
    int data;
    struct node* next;
};
node * newnode(int data)
{
    node * temp=new node();
    temp->data=data;
    temp->next=NULL;
    return temp;

}
void show(node * head)
{
    while(head!=NULL)
    {
        cout<< head-> data<< " ";
        head =head->next;
    }
    cout<< endl;
}
node* fs(node*head)
{
    node *hare=head,*turtle=head;
    if(head==NULL || head-> next==NULL)
    {
        return NULL;
    }
    turtle=turtle->next;
    hare=hare->next->next;

    while(hare && hare->next)
    {
        if(turtle==hare)
        {
            break;
        }
      turtle=turtle->next;
      hare=hare->next->next;

    }
    if(turtle!=hare)
        return NULL;
        if(turtle==hare)
        {
                turtle=head;
        while(turtle->next!=hare->next)
               {
                turtle=turtle->next;
                hare=hare->next;
               }
            hare->next=NULL;

        }
 /*   while(turtle!=hare)
    {
        turtle=turtle->next;
        hare=hare->next;


    }*/





    return turtle;


}
int main()
{
    node* head=newnode(10);
    head->next=newnode(20);
    head->next->next=newnode(30);
    head->next->next->next=newnode(40);
    head->next->next->next->next=newnode(50);

    head->next->next->next->next->next=newnode(60);
     head->next->next->next->next->next->next=head->next->next;

    node * res=fs(head);
    if(res==NULL)
        cout<< "THE LOOP DOES NOT EXIST ";
    else
        cout<< "THE LOOP  EXISTs ";
       show(head);
    return 0;



}


