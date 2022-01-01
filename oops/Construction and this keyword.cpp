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
				cout << "constructor called ! " << endl;
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
				cout << "this : " << this << endl;  // pointer variable
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
	
	student s1;
	s1.rollnumber = 45;
	
	s1.setage(21);
	s1.display();
	
	student s2(23);
	
	
	student *s3 = new student(101);
	s3 -> display();
	
	student s4(19,38);
	cout << "adress of s4 : " << &s4 << endl;
	student *s5 = new student(20, 40);
	
}


















