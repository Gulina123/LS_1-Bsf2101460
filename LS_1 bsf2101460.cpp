#include<iostream>
using namespace std;

int arraypopped[100];
int stack[5],n=5,top=-1;
int count=0;
int i=0;

//Inserting  Elements In Stack
 void push(int val){
	if(top >=n-1)
	cout<<"Stack Overflow"<<endl;
	else 
	{
	top++;
	stack[top]=val;
	}
	}


//Removing Elements In Stack
 
void pop()
{
	if (top <= -1)
		cout << "Stack Underflow" << endl;
	else
	{
		cout << "The Popped element is " << stack[top] << endl;
		
	do
	{
		arraypopped[i]=stack[top];
		i++;
		break;	
	}while(i<n);
		
	top--;
	count++;	
	}
}


void popped()
{
	cout << "The Popped Elements Are " << endl;
	for (int i = 0; i < count; i++)
	{
		cout << arraypopped[i] << "     "<<endl;
	}
}



 //Checking Stack Is Empty
 bool isempty(){
 	if (top==-1){
 		cout<<"The Stack Is Empty.."<<endl;
	 }
	 else 
	 cout<<"The Stack Is Not Empty.."<<endl; 
 	}
 	
 	
// Checkig Stck Is Full
 bool isfull(){
 	if (top==n-1){
 		cout<<"The Stack Is Full.."<<endl;
	 }
	 else 
	 cout<<"The Stack Is Not Full.."<<endl;
 	}


//Printing Stack Elements
	void display (){
	if(top>=0){
	cout<<"The Stack Elements are :";
	for(int i=top; i>=0; i--)
	cout<<stack[i]<<" ";
	cout<<endl;
	}
	
	else
	cout<<"The Stack is Empty";
	}

//For  Even Elements 
 int even(){
 	cout<<"Even Numbers In Slack Are :"<<endl;
	for(int i=top; i>=0; i--)
 	 if(stack[i]%2==0){
 		cout<<stack[i]<<" ";
 		cout<<endl;
	 }
 }


int main(){
	
	
	int ch, val;
	cout<<"1) Push In stack"<<endl;
	cout<<"2) Pop From stack"<<endl;
	cout<<"3) Dispaly stack"<<endl;
	cout<<"4) Check stack is empty "<<endl;
	cout<<"5) Check stack is Full"<<endl;
	cout<<"6) Even"<<endl;
	cout<<"7) Printing Popped Elements"<<endl;
	cout<<"8) Exit"<<endl;

do{
	cout<<"Enter Choice To Perform Function:"<<endl;
	cin>>ch;
	switch(ch){
		
	case 1:
		{
		cout<<"Enter Value To Be Pushed"<<endl;
		cin>>val;
		push(val);
		break;
		
		}
	
	case 2:{
		pop();
		break;
	}
	
		
	case 3:{
		display();
		break;
	}
	
	
	case 4:
		{
		isempty();
		break;
		}
	
		
	case 5:
		{
		isfull();
		break;
		}
	
		
	case 6:{
		even();
		break;
	}
	
		case 7:{
		popped();
		break;
	}
		
	case 8:{
	cout<<"Thanks For Compiling"<<endl;
	exit (0);
	break;
	}
	
	
	default:
		{
			cout<<"Invalid Character"<<endl;
			break;
		}
	
        }
	}
	
	while(ch!=4);
	return 0;
}



