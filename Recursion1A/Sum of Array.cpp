#include<iostream>
using namespace std;


int main(){
    int n;
    cin >> n;
  
    int *input = new int[n];
    
    for(int i = 0; i < n; i++) {
        cin >> input[i];
    }
  
  int sum(int input[], int n) {
  
    if(n == 0)
    {
        return 0;
    }
    
  
    int x = sum(input + 1, n-1 );
      int y = input[0] + x;
    
    return y;
    
}

  
    
    cout << sum(input, n) << endl;
}


