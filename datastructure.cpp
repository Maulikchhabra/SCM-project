#include<iostream>
#include<cstdio>
#include<cstdlib>
//header files//
using namespace std;
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


//Sarthak starts//
void queue1()//function 2= queue implementation//
{

		int num2,op1;
		void Enqueue();
		void Dequeue();
		void Display();
		do
		{
		    cout<<"QUEUE IMPLEMENTATION"<<endl;
        	cout<<"1)Insert in the queue"<<endl;
			cout<<"2)Delete from the queue"<<endl;
			cout<<"3)Display the queue"<<endl;
			cout<<"4)Exit"<<endl;
			cout<<"Enter choice: "<<endl;
			cin>>num2;
            switch (num2)
		   {
                case 1: Enqueue();
                        break;
                case 2: Dequeue();
                        break;
                case 3: Display();
                        break;
                case 4: cout<<"Exit"<<endl;
                        exit(1);
                        break;        
            }
            cout<<"press 1 to continue in queue:"<<endl;
            cin>>op1;
		 }while(op1==1);
	}
//-----------------------------------------------------------------------------------------------------------//
void Enqueue()
{
   int value;
   if (rear == m - 1)
      cout<<"Queue Overflow"<<endl;
   else {
      if (front == - 1)
        front = front+1;
        cout<<"Insert the element in queue : "<<endl;
        cin>>value;
        rear++;
        queue[rear] = value;
   }
}
//------------------------------------------------------------------------------------------------------------------//
void Dequeue() 
{
   if (front == - 1 || front > rear) {
      cout<<"Queue Underflow ";
   return ;
   } else {
      cout<<"Element deleted from queue is : "<< queue[front] <<endl;
      front++;;
   }
}
//-------------------------------------------------------------------------------------------------------------------//
void Display() 
{
   if (front == - 1)
   cout<<"Queue is empty"<<endl;
   else {
      cout<<"Queue elements are : ";
      for (int i = front; i <= rear; i++)
         cout<<queue[i]<<" ";
      cout<<endl;
   }
}
//=================================Queue completed====================================================//
void linear_search()//function 5= linear search//
{
	cout<<"LINEAR SEARCH"<<endl;
	cout<<"Enter the array size : ";
	cin>>z;
	cout<<"Enter Array Elements : ";
	for(i=0; i<z; i++)
	{
		cin>>arr[i];
	}
	cout<<"Enter the number to be search : ";
	cin>>num;
	for(i=0; i<z; i++)
	{
		if(arr[i]==num)
		{
			c=1;
			pos=i+1;
			break;
		}
	}
	if(c==0)
	{
		cout<<"Number not found..!!";
	}
	else
	{
		cout<<num<<" found at position "<<pos;
	}
}
//==================================Linear Searching Complete=======================//
//Sarthak ends//







