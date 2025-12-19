#include <iostream>
using namespace std;

int main() {
  int a;
  cout << "Enter a number: ";
  cin >> a;

  int digit;

  if(a % 2 == 0){
    digit = a - 1;
  } else {
    digit = a;
  }

  int num = 1;
  for (int i = 0; i < digit; i++) {
    cout << num;
    if (i != digit - 1) cout << ", ";
    num += 2;
  }

  return 0;
}