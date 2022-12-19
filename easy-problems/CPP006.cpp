// Find Perfect number

#include <iostream>
using namespace std;

int main()
{
  int n, i, sum = 0;

  cout << "Enter a number ";
  cin >> n;

  for (i = 1; i <= n; i++)
  {
    if (n % i == 0)
    {
      sum += i;
    }
  }

  if (sum == n * 2)
  {
    cout << n << " is a Perfect number";
  }
  else
  {
    cout << n << " Not a perfect number";
  }
}