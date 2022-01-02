#include<bits/stdc++.h>
using namespace std;
class student
{
	
	private:
		int age;
		char *name;
	
	public:
		student(int age, char *name)
		{
			
			this -> age = age;
			// shallow copy
			//	this -> name = name;
			
			this -> name = new char[strlen(name) + 1];
			  // deep copy
			strcpy(this -> name, name);
			
	  	}
	
	    void display()
	    {
	    	cout << age << " " << name << endl;
		}
	
};

int main()
{
	char name[] = "abcd";
	student s1(20, name);
	s1.display();
	
	name[3] = 'e';
	student s2(24, name);
	s2.display();
	
	s1.display();
	
	
}
