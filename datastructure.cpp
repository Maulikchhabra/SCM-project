#include<iostream>
#include<cstdio>
#include<cstdlib>
//header files//
using namespace std;
//--------------------------------------------------------------------------------------------------------//
struct node
{
	int info;
	struct node *next;
};
struct node* start;
//Declaring Structure
//--------------------------------------------------------------------------------------------------------//
//variable declarations//
int stack[100],n=100,top=-1;
int queue[100], m = 100, front = - 1, rear = - 1;
int cqueue[5], front1 = -1, rear1 = -1, size=5;
int arr[100], i, num, z, c=0, pos;
int a, j, array[50], search1, first, last, middle;
//-------------------------------------------------------------------------------------------------------//
void stack1()//function 1 =stack implementation// 
{
	void push(int val);
	void pop();
	void display();
	int num1, val,op;
	    do
			{
			         cout<<"STACK IMPLEMENTATION"<<endl;
               cout<<"1) Push in stack"<<endl;
               cout<<"2) Pop from stack"<<endl;
               cout<<"3) Display stack"<<endl;
               cout<<"4) Exit"<<endl;
               cout<<"Enter choice: 1,2,3,4 "<<endl;
               cout<<"\n";
               cin>>num1;
			         switch(num1)
			         {    
			             case 1:cout<<"Enter value to be pushed:"<<endl;
                           cin>>val;
                           push(val);
                           break;
                   case 2:pop();
                          break;
                   case 3:display();
                          break;  
                   case 4:cout<<"Exit"<<endl;
                          exit(1);
                          break;
                   default:cout<<"Invalid Choice"<<endl;
                           break;
		        }
		       cout<<"press 0 to continue in stack : "<<endl;
		       cin>>op;
		   }   while(op==0);
}
//-------------------------------------------------------------------------------------------------------------//
void push(int val)
{
    if(top>=n-1)
        cout<<"Stack Overflow"<<endl; 
    else
	{
        top++;
        stack[top]=val;
  }
}
//-----------------------------------------------------------------------------------------------------------//
void pop()
{
    if(top<=-1)
        cout<<"Stack Underflow"<<endl;
    else
	{
        cout<<"The popped element is "<< stack[top] <<endl;
        top--;
  }
}
//--------------------------------------------------------------------------------------------------------------//
void display1()
{
    if(top>=0) 
	{
        cout<<"Stack elements are:";
        for(int i=top; i>=0; i--)
        cout<<stack[i]<<" ";
        cout<<endl;
  }
	else
        cout<<"Stack is empty";
}
//=============================Stack completed=======================//
//-----------------------------------------------------------------------------------------------------//
node* createnode(int value)
{
	struct node *temp, *s;
	temp =new(struct node);
	if (temp == NULL)
    {
        cout<<"Memory not allocated "<<endl;
        return 0;
    }
    else
    {
        temp->info = value;
        temp->next = NULL;     
        return temp;
    }
}
//-----------------------------------------------------------------------------------------------------//
//Insertion at beginning of Linked List
void insertbegin()
{
	int value;
	cout<<"Enter the value to be inserted:"<<endl;
	cin>>value;
	struct node *temp,*p;
	temp=createnode(value);
	if(start==NULL)
	{
		start =temp;
		start->next =NULL;
	}
	else
	{
		p=start;
		start=temp;
		start->next =p;
	}
}
//----------------------------------------------------------------------------------------------------//
//Insertion at end of Linked List
void insertlast()
{
	int value;
	cout<<"Enter value to be inserted:"<<endl;
	cin>>value;
	struct node *temp,*s;
	temp=createnode(value);
	s=start;
	while(s->next!=NULL)
	{
		s=s->next;
	}
	temp->next=NULL;
	s->next=temp;
	cout<<"Element inserted at last:"<<endl; 
}
//----------------------------------------------------------------------------------------------------//
void insertpos()
{
	int value,pos,count=0;
	cout<<"Enter value to be inserted:"<<endl;
	cin>>value;
	struct node *temp,*s,*ptr;
	temp=createnode(value);
	cout<<"Enter the position at which node to be inserted:"<<endl;
	cin>>pos;
	 int i;
    s = start;
    while (s != NULL)
    {
        s = s->next;
        count++;
    }
    if (pos == 1)
    {
        if (start == NULL)
        {
            start = temp;
            start->next = NULL;
        }
        else
        {
            ptr = start;
            start = temp;
            start->next = ptr;
        }
    }
    else if (pos > 1  && pos <= count)
    {
        s = start;
        for (i = 1; i < pos; i++)
        {
            ptr = s;
            s = s->next;
        }
        ptr->next = temp;
        temp->next = s;
    }
    else
    {
        cout<<"Positon out of range"<<endl;
    }
}
//----------------------------------------------------------------------------------------------------//
void sort()
{
    struct node *ptr, *s;
    int value;
    if (start == NULL)
    {
        cout<<"The List is empty"<<endl;
        return;
    }
    ptr = start;
    while (ptr != NULL)
    {
        for (s = ptr->next;s !=NULL;s = s->next)
        {
            if (ptr->info > s->info)
            {
                value = ptr->info;
                ptr->info = s->info;
                s->info = value;
            }
        }
        ptr = ptr->next;
    }
}
//-----------------------------------------------------------------------------------------------------//
void deletepos()
{
    int pos, i, counter = 0;
    if (start == NULL)
    {
        cout<<"List is empty"<<endl;
        return;
    }
    cout<<"Enter the position of value to be deleted: ";
    cin>>pos;
    struct node *s, *ptr;
    s = start;
    if (pos == 1)
    {
        start = s->next;
    }
    else
    {
        while (s != NULL)
        {
            s = s->next;
            counter++;  
        }
        if (pos > 0 && pos <= counter)
        {
            s = start;
            for (i = 1;i < pos;i++)
            {
                ptr = s;
                s = s->next;
            }
            ptr->next = s->next;
        }
        else
        {
            cout<<"Position out of range"<<endl;
        }
        free(s);
        cout<<"Element Deleted"<<endl;
    }
}
//----------------------------------------------------------------------------------------------------//
