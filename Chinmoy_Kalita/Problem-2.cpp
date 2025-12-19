#include <iostream>
using namespace std; 

int main() {
  int a;
  cout << "Enter a number: ";
  cin >> a;

  int curr = 1;
  for(int i = 0; i < a; i++){
    cout << curr;
    if(i != a - 1) cout <<", ";
    curr += 2;
  }
  return 0;
}