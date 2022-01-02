#include<iostream>
using namespace std;

class student
{
	public:
		int rollnumber;
		
	private:
		int age;
		
		public :
			
			
			student()    // Default Constructor
			{
				cout << "constructor called 1 ! " << endl;
			}
			
			student (int age) // parametrized constructor 
			{
				this -> age = age;  // this keyword
				cout << "constructor called 2 ! " << endl;
			}
			
			student(int age, int rollnumber)  // parametrized constructor 
			{
				this -> age = age;
				this -> rollnumber = rollnumber;
				cout << "constructor called 3 !" << endl;
				cout << "this : " << this << endl;
			}
			int getage()
			{
				return age;
			}
			
			int setage(int a)
			{
				age = a;
			}
			
			void display()
			{
				cout << rollnumber << " " << age << endl;
			}
	
};


int main()
{
	
	student s1;  // constructor 1 called
	
	student s2(25);  // constructor 2 called
	
	student s3(23, 56); // constructor 3 called
	
	student s4(s3);  // copy constructor 
	
	s1 = s2;   // copy assignment operator
	
	student s5 = s4;  // copy constructor
	
}


















