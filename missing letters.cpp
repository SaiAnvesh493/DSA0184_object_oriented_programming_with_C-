#include<iostream>
using namespace std;
int main()
{
    int a[100], i, n, sum = 0, s, missing;
	cout << "Enter the size of array:";
    cin >> n;
    s = n * (n + 1) / 2;
    cout << "Enter the elements:";
    for (i = 0; i < n - 1; i++)
    {
        cin >> a[i];
        sum = sum + a[i];
    }
    missing = s - sum;
    cout << "Missing element: " << missing;
    return 0;
}
