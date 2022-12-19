// Find Prime number
// Number that have only two factors

#include <iostream>
using namespace std;

int main()
{
  int n, i, fact = 0;

  cout << "Enter a number ";
  cin >> n;

  for (i = 1; i <= n; i++)
  {
    if (n % i == 0)
    {
      fact += 1;
    }
  }

  if (fact == 2)
    cout << "Prime number";
  else
    cout << "Not a prime number";
}