#include<iostream>
using namespace std;


int main(){
    int n;
    cin >> n;
  
    int *input = new int[n];
    
    for(int i = 0; i < n; i++) {
        cin >> input[i];
    }
    
    int x;
    
    cin >> x;
  
  
  int lastIndex(int input[], int size, int x)
{
  int ans;
    
    if(size == 0)
    {
        return -1;
        
    }
    
    
    
        
         
         ans = lastIndex(input + 1, size-1, x);
    
     if(ans != -1)
               return ans +1;
    
      else if( input[0] == x)
              return 0;
    
    if(ans != -1)
               return ans +1;
    
          else 
               return -1  
    
}

    
    cout << lastIndex(input, n, x) << endl;

}


