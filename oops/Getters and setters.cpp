#include <iostream>
using namespace std;

class student
{
	public : 
	  int age;
	  
	  private :
	  	string name;
	  	
	  	public :
	  		
	  		string getname()
	  		{
	  			return name;
			}
			
			void setname (string c)
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
	s1.getname();
	s1.setname("naman");
	s1.display();
}
