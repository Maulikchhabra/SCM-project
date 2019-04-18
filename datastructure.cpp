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
//Krishan starts//
void circularqueue()//function 3= circular queue//
{
	int num3,val,op2;
	void enqueueCQ(int val);
	void dequeueCQ();
	void displayCQ();
	do
	{
	    cout<<"CIRCULAR QUEUE IMPLEMENTATION"<<endl;
	    cout<<"1)Insert in circular queue"<<endl;
	    cout<<"2)Delete in circular queue"<<endl;
	    cout<<"3)Show the circular queue"<<endl;
	    cout<<"Enter the choice:"<<endl;
	    cin>>num3;
	    switch(num3)
	    {
	    	case 1:cout<<"Enter value to be inserted:"<<endl;
	    	       cin>>val;
	    	       enqueueCQ(val);
	    	       break;
	    	case 2:dequeueCQ();
			       break;
			case 3:displayCQ();
			       break;	  
			default:cout<<"Enter valid choice"<<endl;
			        break;	           
		}
		cout<<"press 2 to continue in circular queue:"<<endl;
		cin>>op2;
    }while(op2==2);
}
//------------------------------------------------------------------------------------------------------------//
bool isempty()
{
	if(front1==-1&&rear==-1)
	  return true;
	else 
	  return false;  
}
//-----------------------------------------------------------------------------------------------------------------//
void enqueueCQ(int val)
{
  if((rear1+1)%size==front1)
    cout<<"queue is full\n";
  else
  {
  	if(front1==-1)
  	  front1=0;
  	  rear1=(rear1+1)%size;
  	  cqueue[rear1]=val;
	}  
}
//-----------------------------------------------------------------------------------------------------------------//
void dequeueCQ() 
{
   if(isempty())
   {
   	 cout<<"Queue is empty\n";
   }
   else 
   {
   	 if(front1==rear1)
   	    front1=rear1=-1;
   	 else
		front1=(front1+1)%size;   
   }	
}
//-----------------------------------------------------------------------------------------------------------------//
void displayCQ()
{
   if(isempty())
     cout<<"Queue is empty\n";
   else
   {
     int i;
   	 if(front1 <= rear1)
   	 { 
   	    for(i=front1;i<=rear1;i++)
		   cout<<cqueue[i]<<"";	
	 }
	 else
	 {
	    i=front1;
	    while(i<size)
		{
			cout<<cqueue[i]<<"";
			i++;
		}
		i=0;
		while(i<=rear1)
		{
			cout<<cqueue[i]<<"";
			i++;
		} 
	 }
	}  
}
//=========================Circular Queue Completed=================================//
void binary_search1()//function 6= binary search//
{
	cout<<"BINARY SEARCH"<<endl;
	cout<<"Enter total number of elements :";
	cin>>a;
	cout<<"Enter "<<a<<" number :";
	for (j=0; j<a; j++)
	{
		cin>>array[j];
	}
	cout<<"Enter a number to find :";
	cin>>search1;
	first = 0;
	last = a-1;
	middle = (first+last)/2;
	while (first <= last)
	{
		if(array[middle] < search1)
		{
			first = middle + 1;

		}
		else if(array[middle] == search1)
		{
			cout<<search1<<" found at location "<<middle+1<<"\n";
			break;
		}
		else
		{
			 last = middle - 1;
		}
		middle = (first + last)/2;
	}
	if(first > last)
	{
		cout<<"Not found! "<<search1<<" is not present in the list.";
	}
}
//==========================Binary Searching complete===========================================//
//Krishan ends//



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







