#include <iostream>
using namespace std;

class ComplexNumbers 
{
    private :
      
       int real1;
       int imaginary1;
    
    public :
       
    ComplexNumbers (int real1, int imaginary1)
    {
        this -> real1 = real1;
        this -> imaginary1 = imaginary1;
    }
 
    void plus(ComplexNumbers c2)
    {
          this -> real1 = real1 + c2.real1;
          this -> imaginary1 = imaginary1 + c2.imaginary1;
     }
    
    
    void multiply(ComplexNumbers c2)
    {
        
        int x =   real1*c2.real1 - imaginary1*c2.imaginary1;
        int y =   imaginary1*c2.real1 + real1*c2.imaginary1;
        
        real1 = x;
        imaginary1 = y;
        
     }
    
    void print()
    {  
     
        cout << real1 << " " << "+" << " " << "i"<<imaginary1;
    }
 };
 
 int main()
 {
   
    int real1, imaginary1, real2, imaginary2;
   
    
    cin >> real1 >> imaginary1;
    cin >> real2 >> imaginary2;
   
     ComplexNumbers c1(real1, imaginary1);
     ComplexNumbers c2(real2, imaginary2);
   
     int choice;
    cin >> choice;
    
    if(choice == 1) {
        c1.plus(c2);
        c1.print();
    }
    else if(choice == 2) {
        c1.multiply(c2);
        c1.print();
    }
    else {
        return 0;
    }   
    
 }

 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
