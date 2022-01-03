#include<iostream>
using namespace std;

class dynamicArray
{
	 int *data;
	 int capacity;
	 int nextindex;
	 
	 public :
	 	 dynamicArray()
	 	 {
	 	 	data = new int[5];
	 	 	capacity = 5;
	 	 	nextindex = 0;
	 	  }
	 	  
	 	  dynamicArray (dynamicArray const &d)
	 	  {
	 	  //	this -> data = d.data;  // shallow copy
	 	  	
	 	  	// deep copy
	 	  	this -> data = new int[d.capacity];
	 	  	for(int i = 0; i<d.nextindex; i++)
	 	  	{
	 	  		this -> data[i] = d.data[i];
	 	  	}
	 	  	  this -> nextindex = d.nextindex;
	 	  	  this -> capacity = d.capacity;
		 }
		 
		 void operator=(dynamicArray const &d)
		 {
		 	
	 	  	this -> data = new int[d.capacity];
	 	  	for(int i = 0; i<d.nextindex; i++)
	 	  	{
	 	  		this -> data[i] = d.data[i];
	 	  	}
	 	  	  this -> nextindex = d.nextindex;
	 	  	  this -> capacity = d.capacity;
		 }
	 	  	
	 	  	
		   
	 	  void add(int element)
	 	   {
	 	  	  if(capacity == nextindex)
	 	  	   {
				  int *newdata = new int[2*capacity];
				   for(int i = 0; i<capacity; i++)
				   {
				   	  newdata[i] = data[i];
				    }
				        delete [] data;
				        data = newdata;
				        capacity = 2*capacity;
				 }
				   	 data[nextindex] = element;
			            	nextindex++;
			}
		
		  int get(int i)
		   {
		  	  if(i < nextindex)
		  	   {
		  	  	return data[i];
				}
				else
			    	return -1;
        	}
			
			void add(int i, int element)
			{
				if(i < nextindex)
				{
					data[i] = element;
				}
				
				else if ( i == nextindex)
				{
					add(element);
				}
				
				else
				{
					return;
				}
			}
			
			void print()
			{
				for(int i = 0; i<nextindex; i++)
				{
					cout << data[i] << " ";
				}
				cout << endl;
			 }	  
				  
	};


int main()
{
	dynamicArray d1;
	d1.add(10);
	d1.add(20);
	d1.add(30);
	d1.add(40);
	d1.add(50);
	d1.add(60);
	d1.print();
	
	
	dynamicArray d2(d1);		// Copy constructor

	dynamicArray d3;

	d3 = d1;

	d1.add(0, 100);

	d2.print();
	d3.print();

	

	
	
}






















