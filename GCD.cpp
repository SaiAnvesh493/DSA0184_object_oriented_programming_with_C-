#include <iostream>

using namespace std;

int gcd(int n1, int n2) {
  int k = 0,lcm;
for(int i=1;i<=n1 && i<=n2;i++)
{
	if(n1%i==0 && n2%i==0)
	{
		k=1;
	}
}
lcm=(n1*n2)/k;
}

int main() {
  int n1, n2;
  cout << "Enter two numbers: ";
  cin >> n1 >> n2;
  cout << "The GCD of " << n1 << " and " << n2 << " is " << gcd(n1,n2);
  return 0;
}
