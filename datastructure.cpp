#include<iostream>
#include<cstdio>
#include<cstdlib>
//header files//
using namespace std;
//namespace//
//--------------------------------------------------------------------------------------------------------//
//variable declarations//
int stack[100],n=100,top=-1;
int queue[100], m = 100, front = - 1, rear = - 1;
int cqueue[5], front1 = -1, rear1 = -1, size=5;
int arr[100], i, num, z, c=0, pos;
int a, j, array[50], search1, first, last, middle;
//-------------------------------------------------------------------------------------------------------//
//Maulik starts//
void stack1()//function 1 =stack implementation// 
{
	void push(int val); //to insert element//
	void pop(); //to delete element//
	void display(); //to display elements//
	int num1, val,op;
	        do 
			{
			   cout<<"STACK IMPLEMENTATION"<<endl;//for printing//
                           cout<<"1) Push in stack"<<endl;
                           cout<<"2) Pop from stack"<<endl;
                           cout<<"3) Display stack"<<endl;
                           cout<<"4) Exit"<<endl;
                           cout<<"Enter choice: 1,2,3,4 "<<endl;
                           cout<<"\n";
                           cin>>num1;//to insert value of num 1//
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
		         } while(op==0);
}
//-------------------------------------------------------------------------------------------------------------//
void push(int val)//to add value in stack//
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
void pop()//to delete the element in stack//
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
void display1()//to display the stack//
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
//================================Stack completed=====================================================//
//Maulik ends//
//Sarthak starts//
void queue1()//function 2= queue implementation//
{

		int num2,op1;
		void Enqueue(); //to insert element//
		void Dequeue(); //to delete element//
		void Display(); //to display element//
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
//Kshitiz starts//
struct node
{
	int info;
	struct node *next;
};
struct node* start;
//-----------------------------------------------------------------------------------------------------//
void singlelinkedlist()//function4= singular linked list
{
	int num4,op3;
	node* createnode(int);
	start=NULL;
    void insertbegin();
    void insertpos();
    void insertlast(); 
    void deletepos();
    void sort();
    void search();
    void update();
    void reverse();
    void display();
    do 
    { 
        cout<<"SINGLE LINKED LIST IMPLEMENTATION"<<endl;
    	cout<<"1)Insert Node at beginning"<<endl;
        cout<<"2)Insert node at last"<<endl;
        cout<<"3)Insert node at position"<<endl;
        cout<<"4)Sort Link List"<<endl;
        cout<<"5)Delete a Particular Node"<<endl;
        cout<<"6)Update Node Value"<<endl;
        cout<<"7)Search Element"<<endl;
        cout<<"8)Display Linked List"<<endl;
        cout<<"9)Reverse Linked List "<<endl;
        cout<<"10)Exit "<<endl;
        cout<<"Enter your choice : "<<endl;
        cin>>num4;
        switch(num4)
        {
        	case 1:cout<<"Inserting Node at Beginning: "<<endl;
                  insertbegin();
                  cout<<endl;
                  break;
            case 2:cout<<"Inserting Node at Last: "<<endl;
                   insertlast();
                   cout<<endl;
                   break;
            case 3:cout<<"Inserting Node at a given position:"<<endl;
                   insertpos();
                   cout<<endl;
                   break;
            case 4:cout<<"Sort Link List: "<<endl;
                   sort();
                   cout<<endl;
                   break;
            case 5:cout<<"Delete a particular node: "<<endl;
                   deletepos();
                   break;
            case 6:cout<<"Update Node Value:"<<endl;  
                   update();
                   cout<<endl;
                   break;
            case 7:cout<<"Search element in Link List: "<<endl;
                   search();
                   cout<<endl;
                   break;
            case 8:cout<<"Display elements of link list"<<endl;
                   display();
                   cout<<endl;
                   break;
            case 9:cout<<"Reverse elements of Link List"<<endl;
                   reverse();
                   cout<<endl;
                   break;
            case 10:cout<<"Exiting..."<<endl;
                    exit(1);
                    break;  
            default:cout<<"Wrong choice"<<endl;       
                    break;
		}
		cout<<"press 3 to continue in single linked list"<<endl;
		cin>>op3;
	}while(op3==3);
}
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
void update()
{
    int value, pos, i;
    if (start == NULL)
    {
        cout<<"List is empty"<<endl;
        return;
    }
    cout<<"Enter the node postion to be updated: ";
    cin>>pos;
    cout<<"Enter the new value: ";
    cin>>value;
    struct node *s, *ptr;
    s = start;
    if (pos == 1)
    {
        start->info = value; 
    }
    else
    {
        for (i = 0;i < pos - 1;i++)
        {
            if (s == NULL)
            {
                cout<<"There are less than "<<pos<<" elements";
                return;
            }
            s = s->next;
        }
        s->info = value;  
    }
    cout<<"Node Updated"<<endl;
} 
//----------------------------------------------------------------------------------------------------//
void search()
{
    int value, pos = 0;
    bool flag = false;
    if (start == NULL)
    {
        cout<<"List is empty"<<endl;
        return;
    }
    cout<<"Enter the value to be searched: ";
    cin>>value;
    struct node *s;
    s = start;
    while (s != NULL)
    {
        pos++;
        if (s->info == value)
        {
            flag = true;
            cout<<"Element "<<value<<" is found at position "<<pos<<endl;
        }
        s = s->next;
    }
    if (!flag)
        cout<<"Element "<<value<<" not found in the list"<<endl;  
}
//-----------------------------------------------------------------------------------------------------//
void reverse()
{
    struct node *ptr1, *ptr2, *ptr3;
    if (start == NULL)
    {
        cout<<"List is empty"<<endl;
        return;
    }
    if (start->next == NULL)
    {
        return;
    }  
    ptr1 = start;
    ptr2 = ptr1->next;
    ptr3 = ptr2->next;
    ptr1->next = NULL;
    ptr2->next = ptr1;
    while (ptr3 != NULL)
    {
        ptr1 = ptr2;
        ptr2 = ptr3;
        ptr3 = ptr3->next;
        ptr2->next = ptr1;         
    }
    start = ptr2;
}
//-----------------------------------------------------------------------------------------------------//
void display()
{
    struct node *temp;
    if (start == NULL)
    {
        cout<<"The List is Empty"<<endl;
        return;
    }
    temp = start;
    cout<<"Elements of list are: "<<endl;
    while (temp != NULL)
    {
        cout<<temp->info<<"->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}
//====================================Single linked list completed====================//
//Kshitiz ends//
int main()
{
	int n1;
   do {
   	    cout<<".................HELLO THERE................."<<endl;
   	    cout<<"1)Stack implementation"<<endl;
            cout<<"2)Simple Queue implementation"<<endl;
	    cout<<"3)Circular Queue implementation"<<endl;   	   
	    cout<<"4)Linked list implementation"<<endl;
	    cout<<"5)Linear searching"<<endl;
	    cout<<"6)Binary Searching"<<endl;  	
            cout<<"Enter choice: 1,2,3,4,5,6: "<<endl;
            cin>>n1;
           switch(n1)
           {
                 case 1 :stack1();
                         break;		
		 case 2 :queue1(); 
		         break;
		 case 3 :circularqueue();
		         break;
		 case 4 :singlelinkedlist();
		         break;
		 case 5 :linear_search();
		         break;
		 case 6 :binary_search1();
		         break;		 		 		         
          }  
    }
    while(n1!=4); 
	return 0;
}	
