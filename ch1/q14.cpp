#include <iostream>
using namespace std;

int main() {
  int a;
  cout<<"give an integer and I will tell you how many digits it has"<<endl;
  cin>>a;
  if(a<0){
    a*=-1;
  }
  int n=1;
  while(a>1){
    n++;
    a/=10;
  }
  cout<<"there are "<<n<<" digits"<<endl;
  return 0;
}