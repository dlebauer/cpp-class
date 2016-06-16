#include <iostream>
using namespace std;

/*
 Use nested for loops to print:
 1
 1 2
 1 2 3 etc. until you reach the line that prints up to the number 10.
 */
int main() {
  for (int i=1; i<=10; i++){
    for(int ii=10; ii >= i; ii--){
      cout << ' ';      
    }
    for(int ii=1; ii <= i; ii++){
      cout << '*';      
    }
    for(int ii=0; ii <= i-2; ii++){
      cout << '*';      
    }
    
    cout << endl;
  }
}
