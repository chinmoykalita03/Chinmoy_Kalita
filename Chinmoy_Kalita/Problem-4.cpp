#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n;
  cout << "Enter the number of elements: ";
  cin >> n;

  vector<int> arr(n);
  cout << "Enter the elements: ";
  for(int i = 0; i < n; i++){ 
    cin >> arr[i];
  }

  int cnt[10] = {0};

  for (int j = 1; j <= 9; j++) {
    int c = 0;
    for (int x : arr) {
      if (x % j == 0) c++;
    }
    cnt[j] = c;
  }

  cout << "{";
  for (int i = 1; i <= 9; i++) {
    cout << i << ": " << cnt[i];
    if (i != 9) cout << ", ";
  }
  cout << "}";

  return 0;
}