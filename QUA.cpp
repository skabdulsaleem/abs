/*Program of queue using array*/
# include<stdio.h>
#include<iostream>
#include<stdlib.h>
# define MAX 5
int queue_arr[MAX];
int rear = -1;
int front = -1;
using namespace std;
class Queue_using_array
{
public:
void insert();
void del();
void display();
};
int main()
{
Queue_using_array obj;
int choice;
while(1)
{
cout<<"1.Insert\n";
cout<<"2.Delete\n";
cout<<"3.Display\n";
cout<<"4.Quit\n";
cout<<"Enter your choice : ";
cin>>choice;

switch(choice)
{
case 1 :
obj.insert();
break;
case 2 :
obj.del();
break;
case 3:
obj.display();
break;
case 4:
exit(1);
default:
cout<<"Wrong choice\n";
}/*End of switch*/
}/*End of while*/
}/*End of main()*/

void Queue_using_array::insert()
{
int added_item;
if (rear==MAX-1)
cout<<"Queue Overflow\n";
else
{
if (front==-1) /*If queue is initially empty */
front=0;
cout<<"Input the element for adding in queue : ";
cin>>added_item;
rear=rear+1;
queue_arr[rear] = added_item ;
}
}/*End of insert()*/

void Queue_using_array::del()
{
if (front == -1 || front > rear)
{
cout<<"Queue Underflow\n";
/*return ;*/
}
else
{
cout<<"Element deleted from queue is : "<<queue_arr[front]<<"\n";
front=front+1;
}
}/*End of del() */

void Queue_using_array::display()
{
int i;
if (front == -1)
cout<<"Queue is empty\n";
else
{
cout<<"Queue is :\n";
for(i=front;i<= rear;i++)
cout<<queue_arr[i]<<"\t"<<"\n";

}
}/*End of display() */ 

