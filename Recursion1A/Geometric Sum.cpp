#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main() {
    int k;
    cin >> k;
  
  
  double geometricSum(int k)
{
   
    if(k == 0)
    {
        return 1;
    }
    
      
     
         double x = geometricSum(k-1);
    
              double y = 1 / pow(2, k) + x;
                 
                return y;
    
    
}



    cout << fixed << setprecision(5);
    cout << geometricSum(k) << endl;   
}
