#include <iostream>
using namespace std;

class student
{
	public:
	
	int rollnumber;
	
	private:
	int age;
	
	public:
		
//			void display() 
//			{
////		cout << age << "ab"  << rollnumber << endl;
   //   	}

		
		void setfunc(int a)
		{
			age = a;
		}
		
		int getfunc()
		{
			return age;
		}
	
};

int main()
{
	// create objects staticlly
	student s1;
	student s2;
	
//	s1.age = 21;
	s1.rollnumber = 12;
	
	cout << s1.getfunc() <<" bc " << s1.rollnumber << endl;
	
//	s2.age = 22;
	s2.rollnumber = 13;
	
//	s1.display();
//	s2.display();
	
	
	
cout <<	 s2.getfunc() << " cd  " << s2.rollnumber << endl;
	
	// create objects dynamically
	student *s3 = new student;
	//(*s3).age = 25;
	s3 -> rollnumber = 14;
	
	cout << "fc" <<	s3 -> rollnumber;
	
//	(*s3).display();
	
	
}
