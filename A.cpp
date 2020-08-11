#include <iostream>
using namespace std;
int main() {
  int  n;
  cin>>n;
  int a = n/5;
  n-= a*5;
  int b = n/2;
  n-= b*2;
  cout<< a<<"(5r) "<<b<<"(2r) "<<n<<"(1r)";
  return 0;
}