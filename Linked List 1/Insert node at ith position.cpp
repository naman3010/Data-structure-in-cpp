#include<iostream>
using namespace std;

class node
{
	public :
		int data;
		node *next;
		
		node(int data)
		{
			this -> data = data;
			next = NULL;
		}
};

node * takeinput()
{   
       int data;
	cin >> data ;
	node * head = NULL;
	while(data != -1)
	{
		node *newnode = new node(data);
		 if(head == NULL)
		 {
		 	head = newnode;
		 }
		 
		 else
		 {
		 	   node *temp = head;
		 	   while(temp -> next != NULL)
		 	   {
		 	   	  temp = temp -> next;
			   }
			     temp -> next = newnode;
		 	 }
		    cin >> data ;
	}
	
	 return head;
}

node* insertnode(node *head, int i, int data)
{   
    node *newnode = new node(data);
    node *temp = head;
	int count = 0;
	
	if(i==0)
   {
   	 	newnode -> next = head;
		head = newnode;
		return head;
   }	
	while(temp != NULL & count < i-1 )
	{
		temp = temp -> next;
		count++;
	}
	
	  if(temp != NULL)
	  {
	  	 node *a = temp -> next;
	 temp -> next = newnode;
	 newnode -> next = a;
      }
        return head;
	
}


void print(node *head)
  {
  	 // node *temp = head;
  	  while(head != NULL)
  	  {
  	  	cout << head -> data << " ";
  	  	head = head -> next;
  	  	
	  }
  	
  }



int main()
{
	node * head = takeinput();

     print(head);
     
     
       int i, data;
       cin >> i >> data;
       insertnode(head, i, data);  
	    print(head);     

	
}
