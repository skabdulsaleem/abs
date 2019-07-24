#include<iostream>
#include<stdlib.h>
using namespace std;
void insertAtBeginning(int);
void insertAtEnd(int);
void insertBetween(int,int,int);
void display();
void removeBeginning();
void removeEnd();
void removeSpecific(int);
struct Node
{
int data; 
struct Node *next;
}
*head=NULL;
int main()
{
int choice,value,choice1,loc1,loc2;
while(1){
mainMenu;
cout<<"\n\n*****MENU*****\n1.Insert\n2.Display\n3.Delete\n4.Exit\nEnter your choice:";
cin>>choice;
switch(choice)
{
case 1:cout<<"Enter the value to be insert:";
cin>>value;
while(1)
{
cout<<"Where you want to insert:\1.At Beginning\n2.At End\n3.Between\nEnter your choice:";
cin>>choice1;
switch(choice1)
{
case 1: insertAtBeginning(value);
        break;
case 2: insertAtEnd(value);
        break;
case 3:cout<<"Enter the two values where you want to insert";
        cin>>loc1>>loc2;
         insertBetween(value,loc1,loc2);
         break;
default: cout<<"\n Wrong Input!!Try again!!\n\n";
         goto mainMenu;
}
goto subMenuEnd;
}
subMenuEnd:
break;
case 2:display();
       break;
case 3:cout<<"Ho do you want to delete:\n1.From Beginning\n 2.From End\n 3.Specific\n Enter your choice:";
cin>>choice1;
switch(choice1)
{
case 1:removeBeginning();
       break;
case 2:removeEnd();
       break;
case 3:cout<<"Enter the value which you want to delete:";
       cin>>loc2;
removeSpecific(loc2);
       break;
default: cout<<"\nWrong Input!! Try again!!!\n\n";
       goto mainMenu;
}
       break;
case 4:exit(0);
default:cout<<"\nWrong input!!! Try again!!\n\n";
}
}
}
void insertAtBeginning(int value)
{
struct Node *newNode;
newNode=(struct Node*)malloc(sizeof(struct Node));
newNode->data=value;
if(head==NULL)
{
newNode->next=head;
head=newNode;
}
else
{
newNode->next=head;
head=newNode;
}
cout<<"\nOne node inserted!!!\n";
}
void insertAtEnd(int value)
{
struct Node *newNode;
newNode=(struct Node*)malloc(sizeof(struct Node));
newNode->data=value;
newNode->next=NULL;
if(head==NULL)
head=newNode;
else
{
struct Node *temp=head;
while(temp->next!=NULL)
temp=temp->next;
temp->next=newNode;
}
cout<<"\n One node inserted!!!";
}
void insertBetween(int value,int loc1,int loc2)
{
struct Node *newNode;
newNode=(struct Node*)malloc(sizeof(struct Node));
newNode->data=value;
if(head==NULL)
{
newNode->next=NULL;
head==newNode;
}
else
{
struct Node *temp=head;
while(temp->data!=loc1&&temp->data!=loc2)
temp=temp->next;
newNode->next=temp->next;
temp->next=newNode;
}
cout<<"\nOne node inserted!!!\n";
}
void removeBeginning()
{
if(head==NULL)
cout<<"\nList is empty!!!\n";
else{
struct Node *temp=head;
if(head->next==NULL)
{
head=NULL;
free(temp);
cout<<"\nOne node deleted!!!\n\n";
}
}
}
void removeEnd()
{
if(head==NULL)
{
cout<<"\nList is Empty!!!\n";
}
else
{
struct Node *temp1=head,*temp2;
if(head->next==NULL)
head=NULL;
else
{
while(temp1->next!=NULL)
{
temp2=temp1;
temp1=temp1->next;
}
temp2->next=NULL;
}
free(temp1);
cout<<"\nOne node deleted!!!\n\n";
}
}
void removeSpecific(int delValue)
{
struct Node *temp1=head,*temp2;
while(temp1->next==NULL){
cout<<"\nGiven node not found in the list!!!";
goto functionEnd;
}
temp2=temp1;
temp1=temp1->next;
}
temp2->next=temp1->next;
free(temp1);
cout<<"\nOne node deleted!!!\n";
functionEnd;
}
void display()
{
if(head==NULL)
{
cout<<"\nList is Empty\n"
}
else
{
struct Node *temp=head;
cout<<"\n\nList elements are-\n";
while(temp->next!=NULL){
cout<<temp->data<<"\t";
temp=temp->next;
}
cout<<temp->data;
}
}



# abs
