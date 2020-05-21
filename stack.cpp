#include<iostream>
#define MAX 1000
using namespace std;
int TOP=-1;

void pop(int arr[MAX])
{ if(TOP==-1)
	cout<<"UNDERFLOW"<<endl;
  else
	{  
	cout<<arr[TOP--]<<endl;
	}
  return;	
}
		
void push(int arr[MAX])
{ if(TOP==MAX-1)
	cout<<"OVERFLOW";
  else
	{int val;	
		cin>>val;
		arr[++TOP]=val;} 
	cout<<endl;
  return;	
}


void peek(int arr[MAX])
{ if(TOP==-1)
	cout<<"EMPTY";
  else
	cout<<arr[TOP];
	cout<<endl;
}

void display(int arr[MAX])
{ if(TOP==-1)
	cout<<"EMPTY"<<endl;
  else
	for(int i=TOP;i!=-1;i--)
		cout<<arr[i]<<",";
	cout<<endl;
}	


int main()
{   

		int arr[MAX],c;
		do{ 
			cout<<"1.PUSH\n"<<"2.POP\n"<<"3.PEEK\n"<<"4.DISPLAY\n"; 
			cin>>c;
			switch(c)
			{ case 1 : push(arr); break;
			  case 2 : pop(arr); break;
			  case 3 : peek(arr); break;	
			  case 4 : display(arr); break;
			}
		}while(c>=1 && c<=4);
return 0;
}		
			