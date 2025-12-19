#include <iostream>
#include <string>
using namespace std;

class calculate {
  public:
  double x, y;
  string opt;

  calculate(double a, double b, string type){
    x = a;
    y = b;
    opt = type;
  }

  double solve(){
    if(opt == "add"){
      return x + y;
    }
    else if(opt == "sub"){
      return x - y;
    }
    else if(opt == "mul"){
      return x * y;
    }
    else if(opt == "div"){
      if(y != 0){
        return x / y;
      } else {
        cout << "Error: Division by zero" << endl;
        return 0;
      }
    }
    else{
      cout << "Error: Invalid operation" << endl;
      return 0;
    }
  }
};

int main(){
  double a, b;
  string type;

  cout << "Enter first number: ";
  cin >> a;
  cout << "Enter second number: ";
  cin >> b;
  cout << "Enter operation (add, sub, mul, div): ";
  cin >> type;

  calculate calc(a, b, type);
  double result = calc.solve();
  
  if(type == "add" || type   == "sub" || type == "mul" || type == "div"){
    cout << "Result: " << result << endl;
  }

  return 0;
}