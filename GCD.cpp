#include <iostream>

using namespace std;

int gcd(int n1, int n2) {
  int k = 1;
  do {
    k++;
  } while (n1 % k != 0 || n2 % k != 0);
  return k;
}

int main() {
  int n1, n2;
  cout << "Enter two numbers: ";
  cin >> n1 >> n2;
  cout << "The GCD of " << n1 << " and " << n2 << " is " << gcd(n1,n2);
  return 0;
}
