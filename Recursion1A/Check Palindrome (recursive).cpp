#include <iostream>
#include "solution.h"



int main() {
    char input[50];
    cin >> input;
  
  bool checkPal(char input[], int start,int size){
                  
    if (start >= size){ 
        return true;
    }
    if (input[start] != input[size]){ 
        return false;
    } 
   
    return checkPal(input, start + 1, size - 1);
    
    return true;
}



bool checkPalindrome(char input[]) 
{
    
         
    int size=0;
    for(int i=0;input[i]!='\0';i++){
        size++;
    }
    return checkPal(input,0,size-1);
                   
}                 



    
    if(checkPalindrome(input)) {
        cout << "true" << endl;
    }
    else {
        cout << "false" << endl;
    }
}
