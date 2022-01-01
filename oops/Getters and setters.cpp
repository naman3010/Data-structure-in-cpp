#include <iostream>
using namespace std;

class student
{
	public : 
	  int age;
	  
	  private :
	  	char name;
	  	
	  	public :
	  		
	  		char getname()
	  		{
	  			return name;
			}
			
			void setname (char c)
			{
				name = c;
			}
	
	    void display()
	    {
	    	cout << name << endl;
		}
	
};

int main()
{
	student s1;
	s1.setname('naman');
}
