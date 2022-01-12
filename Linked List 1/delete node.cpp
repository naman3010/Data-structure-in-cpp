#include <iostream>
using namespace std;

class Node
{
public:
	int data;
	Node *next;
	Node(int data)
	{
		this->data = data;
		this->next = NULL;
	}
};

Node *takeinput()
{
	int data;
	cin >> data;
	Node *head = NULL, *tail = NULL;
	while (data != -1)
	{
		Node *newNode = new Node(data);
		if (head == NULL)
		{
			head = newNode;
			tail = newNode;
		}
		else
		{
			tail->next = newNode;
			tail = newNode;
		}
		cin >> data;
	}
	return head;
}

Node *deleteNode(Node *head, int pos)
{
      int length=0;
    Node* t=head;
    while(t!=NULL)
    {
        t=t->next;
        length++;
    }
    if(pos>=length)
    {
        return head;
    }
   
    int count = 0;
    Node *temp = head;
    
    if(pos == 0)
    {
        head = temp -> next;
        delete temp;
        
    }
    
    while(temp!= NULL && count < pos-1)
    {
        temp = temp -> next;
        count++;
        
    }
    
     if(temp!= NULL && pos!=0)
     {
      Node *a = temp -> next;
      Node *b = a -> next;
      temp -> next = b;
         delete a;
     }
      
       
    
      
    
      return head;
    
      
} 

void print(Node *head)
{
	Node *temp = head;
	while (temp != NULL)
	{
		cout << temp->data << " ";
		temp = temp->next;
	}
	cout << endl;
}

int main()
{
   int t;
  cin >> t;
  
  Node *head = takeinput();
		int pos;
		cin >> pos;
		head = deleteNode(head, pos);
		print(head);
  
  
  
  
  
  
  
  
  
}
